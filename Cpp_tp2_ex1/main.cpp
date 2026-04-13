//
// Created by ilyasse-ch7 on 12/04/2026.
#include<iostream>
#include"cercle.h"

int main () {
    // ici je crer un object
    cercle c1 ;
    // utilisation de constrecteur par default
    c1.affich_cercle();

    //essayer de utiliser constrecteur avec parametres
    cercle c2(1,3.4,2);
    c2.affich_cercle();

    //utilisation du mutateur et asseseur
    std::cout << c1.getRayon() << '\n';
    c1.setrayon(6.6f);
    std::cout << c1.getRayon() << '\n';

    // verifier_cercle
    std :: cout << c2.verifier_cercle(3,4)<< '\n';

    // translation du cercle
    c2.transl_cercle(3.2,3);
    c2.affich_cercle();

    // homothetie

    c2.homothetie(5.3);
    c2.affich_cercle();


}