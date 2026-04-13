//
// Created by ilyasse-ch7 on 12/04/2026.
//
#include<iostream>
#include"Duree.h"  //sil vous plait sans oblier .h !


int main() {

    //test de constrecteur pas default ;

    Duree a1 ;
    a1.affich_heure();

    // constrecteur avec parametre

    Duree a2(4,60,40);
    a2.affich_heure();

    //setter et getters

    a2.setH(-30);
    std::cout<< a2.getH() << '\n';

    a1.setM(-69);
    a1.setM(-39);
    std::cout<< a1.getM()<< '\n';


    //to_sec test !
    a2.affich_heure();
    std::cout << a2.to_sec() << '\n';

    // add_sec !

    a2.affich_heure();
    a2.add_sec(-59);
    a2.affich_heure();


}