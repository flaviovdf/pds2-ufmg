#include <iostream>
using std::cout;
using std::endl;

int misterio( int [], int );

int main() {
  const int arraySize = 10;
  int a[ arraySize ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int result = misterio( a, arraySize );
  cout << "Resultado: " << result << endl;
  return 0; 
}

// O que essa funcao faz?
int misterio( int b[], int size ) {
  if ( size == 1 ) 
    return b[ 0 ];
  else 
    return b[ size - 1 ] + misterio( b, size - 1 );
}