#include "../include/baralho.h"
#include "../include/carta.h"
#include "../include/jogador.h"

int main() {
  Baralho b = Baralho();

  Jogador j1 = Jogador(
    "Flavio", b.remove_tres()
  );
  Jogador j2 = Jogador(
    "Paula", b.remove_tres()
  );
  Jogador j3 = Jogador(
    "Ana", b.remove_tres()
  );
  Jogador j4 = Jogador(
    "Pedro", b.remove_tres()
  );
}

