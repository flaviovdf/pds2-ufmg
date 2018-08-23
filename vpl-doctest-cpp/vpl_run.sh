#!/bin/bash

# 1. Compilação comum
. common_script.sh
. common_compile.sh

# 2. Rodar um main, caso exista.
files=`find . -name '*.cpp' | grep -v testador.cpp | paste -s`
compilar $files -o main
chmod +x main
executar
exitstatus=$?
rm main 2> /dev/null
exit $exitstatus
