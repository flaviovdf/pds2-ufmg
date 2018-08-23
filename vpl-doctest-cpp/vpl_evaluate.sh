#!/bin/bash

# 1. Compilação comum
. common_script.sh
check_program g++
get_source_files cpp
. common_compile.sh

# 1a. Ajuda os alunos vendo se tudo está ok
compila_tudo_menos_testes

# 2. Rodar os testes de unidade
files=`find . -name '*.cpp' | grep -v main.cpp | paste -s`
compilar $files -o main
chmod +x main
./main -nc -s > out 2> err
exitstatus=$?
if [ "$exitstatus" -ne 0 ]; then
  echo "doctest saida padrao: "
  echo
  cat out | remove_cores
  echo
  echo
  echo "doctest saida de erros: "
  echo
  cat err | remove_cores
  echo 'echo "Grade :=>> 0"' > vpl_execution
else
  echo "All tests passed!"
  echo
  echo "doctest saida padrao: "
  echo
  cat out | remove_cores
  echo
  echo
  echo "doctest saida de erros: "
  echo
  cat err | remove_cores
  echo 'echo "Grade :=>> 100"' > vpl_execution
fi

footer
chmod +x vpl_execution
