#include <string>

#include "magic/carta.h"
#include "uno/carta.h"

int main() {
  uno::Carta carta_uno(uno::Cor::VERMELHO,
                     12);
  magic::Carta carta_magic("Monster",
                         72.1);
}
