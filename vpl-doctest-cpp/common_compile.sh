#!/bin/bash


# O VPL não gosta de cores
function remove_cores() {
  sed -r "s/\x1B\[([0-9]{1,2}(;[0-9]{1,2})?)?[mGK]//g"
}


# Roda GCC, remove cores da saída.
function compilar() {
  g++ -std=c++11 -Wall -fdiagnostics-color=never $*
  gppexit=$?
  if [ "$gppexit" -ne "0" ] ; then
    exit $gppexit
  fi
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
