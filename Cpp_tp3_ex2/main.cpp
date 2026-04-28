#include<iostream>
#include "vecteur.h"

using namespace std ;

int main() {
    vecteur v1;
    cout << "le vecteur v1 : " << v1 << '\n' ;

    vecteur v2;
    cout << "le vecteur v2 : " << v2 << '\n' ;

    vecteur v3 = v1 + v2 ;
    cout << "le vecteur v3 = v1 + v2 : " << v3 << '\n' ;

    v2 = v1 - v3 ;
    cout << "v2 = v1 - v3 = " << v2 << '\n' ;


    int result  = v1 * v2 ;
    cout << "le produit scalaire v1 * v2 : " << result << '\n' ;

    vecteur v4 ;
    cout << "vecteur v4 : " << '\n' ;
    cin >> v4 ;

    cout << "le vecteur v4 est : " << v4 ;


}