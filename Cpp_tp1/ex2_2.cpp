#include <iostream>
#include <algorithm>

template <typename T>
 T find_min(T a , T b , T c)  //n'oblier pas le type de return
{
    T result = std::min({a,b,c});
    return result ;
}

int main ()
{

    std :: cout << find_min(12,36,2) << '\n';
    std :: cout << find_min(1.2f,3.6f,2.6f) << '\n'; // f apres la valeur float
    std :: cout << find_min('c','d','d') << '\n';

    return 0 ;


}