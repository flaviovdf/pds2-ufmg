#!/bin/bash


# O VPL não gosta de cores
function remove_cores() {
  sed -r "s/\x1B\[([0-9]{1,2}(;[0-9]{1,2})?)?[mGK]//g"
}


# Roda GCC, remove cores da saída.
function compilar() {
  g++ -std=c++11 -Wall $* > gccout 2> gccerr
  gppexit=$?
  if [ "$gppexit" -ne "0" ] ; then
    echo "!! Nao compilou !!"
    echo "$GPP saida padrao: "
    cat gccout | remove_cores
    echo
    echo
    echo "$GPP saida de erros: "
    cat gccerr | remove_cores
    exit $gppexit
  fi
  rm gccout 2> /dev/null
  rm gccerr 2> /dev/null
  rm *.o 2> /dev/null
}


function executar() {
  ./main $* > out 2> err
  mainexit=$?
  echo "./main saida padrao: "
  cat out | remove_cores
  echo
  echo
  echo "./main saida de erros: "
  cat err | remove_cores
  rm out
  rm err
  return $mainexit
}

# Testa compilacao de cada arquivo. Ajuda alunos a ver erros.
function compila_tudo_menos_testes() {
  for f in *.cpp ; do
    if [ "$f" != "testador.cpp" ] ; then
      if [ "$f" != *"testcase"* ] ; then
        compilar -c $f
      fi
    fi
  done
}


function header() {
  echo "<|--"
  echo
}


function footer() {
  echo
  echo "--|>"
  echo
}
