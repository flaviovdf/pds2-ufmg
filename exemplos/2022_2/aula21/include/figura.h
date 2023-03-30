#ifndef PDS2_FIG_H
#define PDS2_FIG_H

#include <string>

class FiguraAbstrata {
  private:
    std::string _cor;
  public:
    FiguraAbstrata(
      std::string cor
    );
    virtual double area() = 0;
    virtual double perimetro() = 0;
    std::string get_cor();
};

#endif