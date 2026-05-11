//
// Created by ilyasse-ch7 on 10/05/2026.
//

#pragma once
#include<string>


class Personne {
private:
    std ::string Nom;
    std ::string  Prenom;
    int Age ;
public:
    Personne();
    Personne(std::string Nom , std::string Prenom , int Age );

    //mutateurs
    std::string getNom()const;
    std::string getPrenom()const;
    int getAge()const;

    //accesseurs
    void setNom(std::string Nom );
    void setPrenom(std::string Prenom );
    void setAge(int age);

    virtual void affichier()const;
};


