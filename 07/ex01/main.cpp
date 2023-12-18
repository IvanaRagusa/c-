# include "Iter.hpp"

int main( void ) 
{
  int tab[] = { 0, 1, 2, 3, 4 };
  const char *arr[] = {"pippo", "baudo", "ne", "sa"};

  iter( tab, 5, print_el<const int>);
  iter( arr, 4, print_el<const char*>);

  return 0;
}

