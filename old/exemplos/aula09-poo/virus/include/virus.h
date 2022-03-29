#ifndef PDS2_VIRUS_H
#define PDS2_VIRUS_H

#include <string>


class Virus {
private:
  std::string _nome;
  double _forca;
public:
  Virus(std::string nome, double forca);
  std::string get_nome();
  double get_forca();
};


#endif
