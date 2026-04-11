/*#include <iostream>
//1
int main ()
{
    int n , i ;
    float * tab ;
    std :: cout << "donner le nombre d'element de tableau : "  << '\n';
    std :: cin >> n ;
    tab = new float[n];
    for ( i = 0 ; i < n ; i ++)
    {
        std :: cin >> tab[i];
    }
    for ( i = 0 ; i < n ; i++)
    {
        std :: cout << tab[i] << '\t';
    }

    delete []tab ;
    vv
}*/

//2



#include <iostream>
#include <vector>
#include <print>

int main ()
{
    int n , i ;
    std :: println("donner le nombre d'element de tableau : ");
    std :: cin >> n ;
    std :: vector <float> tab(n);
    for ( i = 0 ; i < n ; i ++)
    {
        std :: cin >> tab[i];
    }
    for ( i = 0 ; i < n ; i++)
    {
        std::println("{}", tab[i]);
    }
}
