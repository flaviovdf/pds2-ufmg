#ifndef PDS2_PAPEL_H
#define PDS2_PAPEL_H

enum papel_t {
  ESTUDANTE, FUNCIONARIO, PROFESSOR
};

class Papel {
  public:
    virtual papel_t get_papel_tipo() const;
};

#endif