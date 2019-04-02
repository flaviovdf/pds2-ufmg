#include <iostream>

#include "paciente.h"
#include "virus.h"

int main(void) {
  Virus ebola = Virus("Ebola", 1, 2);
  Paciente flavio("Flavio", 0.5, &ebola);
  Paciente joao("Joao", 0.9);
  Paciente pedro("Pedro", 0.01);

  std::cout << "O Paciente " << flavio.get_nome() << std::endl;
  std::cout << "Esta infectado? " << flavio.esta_infectado() << std::endl;
  std::cout << "Estado do virus ->" << ebola.to_string();

  std::cout << "O Paciente " << joao.get_nome() << std::endl;
  std::cout << "Esta infectado? " << joao.esta_infectado() << std::endl;
  std::cout << "Estado do virus ->" << ebola.to_string();

  joao.contato(flavio);

  std::cout << "O Paciente " << flavio.get_nome() << std::endl;
  std::cout << "Esta infectado? " << flavio.esta_infectado() << std::endl;
  std::cout << "Estado do virus ->" << ebola.to_string();

  std::cout << "O Paciente " << joao.get_nome() << std::endl;
  std::cout << "Esta infectado? " << joao.esta_infectado() << std::endl;
  std::cout << "Estado do virus ->" << ebola.to_string();

  pedro.contato(joao);

  std::cout << "O Paciente " << pedro.get_nome() << std::endl;
  std::cout << "Esta infectado? " << pedro.esta_infectado() << std::endl;
  std::cout << "Estado do virus ->" << ebola.to_string();

  return 0;
}
