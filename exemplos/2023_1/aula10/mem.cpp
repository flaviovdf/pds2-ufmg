struct no_t {
  int _dados;
  no_t *_prox;
};

int main() {
  no_t *no1 = new no_t{7, nullptr};
  no_t *no2 = new no_t{90, nullptr};
  no_t *no3 = new no_t{30, nullptr};
  
  no1->_prox = no2;
  no2->_prox = no3;
  
  return 0;
}