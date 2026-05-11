//
// Created by ilyasse-ch7 on 11/05/2026.
//

#include "../include /Employe.h"

Employe::Employe():Matricule(0),salaire(0),nbr_enfants(0){}


Employe::Employe(int Matricule , float salaire , int nbr_enfants , std::vector<int>tab)
{
    if (Matricule < 0 )Matricule=-Matricule;
    this->Matricule=Matricule ;
    if (salaire < 0 )salaire=-salaire;
    this->salaire=salaire;
    if (nbr_enfants < 0 )nbr_enfants=-nbr_enfants;
    this->nbr_enfants=nbr_enfants;
    for (float x : tab )
    {
        if (x<0) x=-x;
        ages.emplace_back(x);
    }
}

Employe::Employe(const Employe & p1 )
{
    Matricule=p1.Matricule ;
    salaire=p1.salaire;
    nbr_enfants=p1.nbr_enfants;
    ages=p1.ages;
}

void Employe::SaisirEmploye()
{
    float x ;

    std::cout<<"entre la Matricule : " << std::endl;
    std::cin >> Matricule;
    if (Matricule < 0 )Matricule=-Matricule;

    std::cout << "entre le salaire : " << std::endl;
    std::cin >> salaire ;
    if (salaire < 0 )salaire=-salaire;

    std::cout<<"entre le nombres des enfants : "<<std::endl;
    std::cin >> nbr_enfants;
    if (nbr_enfants < 0 )nbr_enfants=-nbr_enfants;

    if (ages.empty())ages.clear();
    for (int i = 0 ; i < nbr_enfants ; i++)
    {
        std::cout<< "entre l'age de enfant " << i + 1 << std::endl ;
        std::cin >> x ;
        if (x<0) x=-x;
        ages.emplace_back(x);
    }

}

float Employe::getSalaire()
{
     return ( nbr_enfants <= 3 )? salaire + (300)*nbr_enfants : salaire + (100)*nbr_enfants ;

}

void Employe::affichier()const
{
    std::cout<< "la Matricule : " << Matricule << std::endl;
    std::cout << "salaire : " << salaire << std::endl ;
    std::cout << "nombres des enfants : " << nbr_enfants << std::endl;
    for (float x : ages) std::cout<< x << '\t' ;
    std::cout << '\n';
}

Employe::~Employe(){}

Employe& Employe::operator=(const Employe & p1 )
{
    Matricule=p1.Matricule ;
    salaire=p1.salaire;
    nbr_enfants=p1.nbr_enfants;
    ages=p1.ages;
    return *this;
}

bool operator==(const Employe & p1 , const Employe & p2)
{
    return (    p2.Matricule==p1.Matricule &&
                p2.salaire==p1.salaire &&
                p2.nbr_enfants==p1.nbr_enfants &&
                p2.ages==p1.ages);
}

bool Employe::operator!=(const Employe & p1) const
{
    return (*this == p1 )? 0:1;
}

std::ostream & operator<<(std::ostream & os , const Employe &p1 )
{
    os << p1.Matricule << '\t' << p1.salaire << '\t' << p1.nbr_enfants << '\t' ;
    os << '\n' ;
    for (float x : p1.ages) os << x ;
    os << '\n' ;
    return os ; // pour le chainage
}