struct Exemplo {
    Exemplo( int y = 10 ) : dado( y ) {}
    int getDadoIncrementado() const {
      return dado++;
    }
    static int getContador() {
      return contador;
    }
    int dado;
    static int contador;
};
