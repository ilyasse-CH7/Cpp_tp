#include <iostream>

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
}