#include <iostream>
#include <map>

int main() {
  // Suport que foi lido de um arquivo...
  std::map<std::string, std::string> senhas_validas;
  senhas_validas["flaviovdf"] = "segredo";
  senhas_validas["beatriz_025"] = "kiddo";

  std::string user;
  std::string password;
  std::cout << "Digite seu usuario: ";
  std::cin >> user;

  std::cout << "Digite sua senha: ";
  std::cin >> password;

  if (senhas_validas.count(user) > 0) {
    std::string senha_correta = senhas_validas[user];
    if (senha_correta == password) {
      std::cout << "You have entered the Matrix!" << std::endl;
    } else {
      std::cout << "Senha inválida" << std::endl;
    }
  } else {
    std::cout << "Usuário desconhecido" << std::endl;
  }

}




