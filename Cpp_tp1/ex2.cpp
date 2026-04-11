#include <iostream>
#include <algorithm>


//1
 int min ( int a , int b , int c )
 {
  int result = std::min({a , b ,c }) ;
  return result ;
 }

float min ( float a , float b , float c )
 {
  float  result = std::min({a , b ,c}) ;
  return result ;
 }

char min ( char a , char b , char c )
 {
  char  result = std::min({a , b ,c }) ;
  return result ;
 }

// tu doit ajouter les {}


int main ()
{

  std :: cout << min(12,36,2) << '\n';
  std :: cout << min(1.2f,3.6f,2.6f) << '\n'; // f apres la valeur float
  std :: cout << min('c','d','d') << '\n';

return 0;

}