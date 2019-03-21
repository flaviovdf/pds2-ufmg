int soma( int n ) {
  if ( n == 0 )
    return 0;
  else
    n + soma( n - 1 );
}