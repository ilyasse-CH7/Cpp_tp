//
// Created by ilyasse-ch7 on 10/05/2026.
//

#include "../include /Etudiant.h"

Etudiant::Etudiant() {
    numero_ref = 0 ;
    Filiere = "" ;
    numero_module = 0 ;

}

Etudiant::Etudiant(int num_ref , std::string F , int num_mod,std::vector<float> tab) {

    if (num_ref<0)num_ref=-num_ref;
    numero_ref = num_ref ;
    Filiere = F ;

    if (num_mod<0)num_mod=-num_mod;
    numero_module = num_mod ;
    for (float x : tab) {
        if (x<0) x=-x;
        notes.push_back(x);
    }
}

Etudiant::Etudiant(const Etudiant &p1 ) {
    numero_ref = p1.numero_ref;
    Filiere = p1.Filiere ;
    numero_module = p1.numero_module;
    notes=p1.notes;
}

void Etudiant::saisirEtudiant() {
    std::cout<<"entre le numero de reference " << '\n';
    std::cin >> numero_ref;
    if (numero_ref < 0 )numero_ref=-numero_ref;
    std::cin.ignore();

    std::cout<<"entre la filiere" <<'\n';
    std::getline(std::cin ,Filiere);
    std::cout<<"entre le numero de module" <<'\n';
    std::cin >> numero_module;
    if (numero_module<0)numero_module=-numero_module;
    int x ;
    for (int i = 0 ; i < numero_module;i++) {
        std::cout<<"entre la note de module numero " << i+1 << '\n' ;
        std::cin>>x;
        if (x<0)x=-x;
        notes.push_back(x);
    }
}

void Etudiant::setNumero_ref(int num) {
        if (num<0)num=-num;
    numero_ref=num;
}
void Etudiant::setFiliere(std::string Filiere) {
    this->Filiere = Filiere;
}
void Etudiant::setNumeroModule(int num) {
    if (num<0)num=-num;
    numero_module = num;
}
void Etudiant::setNotes(std::vector<float> tab) {
    for (float x : tab) {
        if (x<0) x=-x;
        notes.push_back(x);
    }
}


int Etudiant::getNumero_ref()const {
    return numero_ref;
}
std::string Etudiant::getFiliere()const {
    return Filiere;
}
int Etudiant::getNumeroModule()const {
    return numero_module;
}
std::vector<float> Etudiant::getNotes()const {
    return notes;
}
float Etudiant::getMoyenne()const {
    float sum{};
    for (int i = 0 ; i<numero_module ; i++) sum+=notes[i];
    return sum/numero_module;
}
void Etudiant::affichier() const {
    std::cout << "Etudiant de numero_ref est :  " << numero_ref << std::endl;
    std ::cout << "Filiere : " << Filiere << '\t' << "numero module : " << numero_module <<std::endl;
    std::cout<<"les notes : " << std::endl;
    for (float x : notes) {
        std::cout<< x << '\t' ;
    }
    std::cout<<std::endl;
}

