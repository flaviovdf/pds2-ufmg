#include "figura.h"
#include <string>

FiguraAbstrata::FiguraAbstrata(
  std::string cor
): _cor(cor) {}

std::string FiguraAbstrata::get_cor() {
  return _cor;
}