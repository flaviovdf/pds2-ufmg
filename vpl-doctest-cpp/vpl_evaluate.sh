#!/bin/bash

# 1. Compilação comum
. common_script.sh
. common_compile.sh

# 2. Rodar um main, caso exista.
files=`find . -name '*.cpp' | grep -v main.cpp | paste -s`
compilar $files -o main
chmod +x main
./main -nc -s > out 2> err
exitstatus=$?
if [ "$exitstatus" -ne 0 ]; then
  echo "./main saida padrao: "
  cat out | remove_cores
  echo
  echo
  echo "./main saida de erros: "
  cat err | remove_cores
  echo "Grade :==> 0"
else
  echo "All tests passed!"
  echo "Grade :==> 100"
fi
rm err 2> /dev/null
rm out 2> /dev/null
rm main 2> /dev/null
exit $exitstatus
