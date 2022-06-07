#include <iostream>

#include "paciente.h"
#include "virus.h"

using namespace std;

int main(void) {
  Virus ebola = Virus("Ebola", 1, 2);
  Paciente flavio("Flavio", 0.5, &ebola);
  Paciente joao("Joao", 0.9);
  Paciente pedro("Pedro", 0.01);

  cout << "O Paciente " << flavio.get_nome() << endl;
  cout << "Infectado? " << flavio.esta_infectado() << endl;
  cout << "Estado do virus ->" << ebola.to_string();

  cout << "O Paciente " << joao.get_nome() << endl;
  cout << "Infectado? " << joao.esta_infectado() << endl;
  cout << "Estado do virus ->" << ebola.to_string();

  joao.contato(flavio);

  cout << "O Paciente " << flavio.get_nome() << endl;
  cout << "Infectado? " << flavio.esta_infectado() << endl;
  cout << "Estado do virus ->" << ebola.to_string();

  cout << "O Paciente " << joao.get_nome() << endl;
  cout << "Infectado? " << joao.esta_infectado() << endl;
  cout << "Estado do virus ->" << ebola.to_string();

  pedro.contato(joao);

  cout << "O Paciente " << pedro.get_nome() << endl;
  cout << "Infectado? " << pedro.esta_infectado() << endl;
  cout << "Estado do virus ->" << ebola.to_string();

  return 0;
}
