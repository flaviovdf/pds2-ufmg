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
cat > vpl_execution <<EEOOFF
#!/bin/bash
echo "<|--"
./main -nc -s
exitstatus=\$?
echo "--|>"
if [ "\$exitstatus" -ne 0 ]; then
  echo "Grade :=>>0"
else
  echo "Grade :=>>100"
fi
EEOOFF
chmod a+x vpl_execution
