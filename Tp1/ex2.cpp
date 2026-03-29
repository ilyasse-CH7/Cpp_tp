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