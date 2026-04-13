#include <iostream>
#include <vector>
#include <string>

struct TLivre
{
    std :: string auteur ;
    std :: string titre ;
    bool emprunte ;
};

TLivre SaisirLivre () {
    TLivre t1 ;
    std :: string reponse ;
    std :: cout << "entre le nome de auteur " << '\n' ;
    std :: getline(std::cin , t1.auteur);

    std :: cout << "entre le titre " << '\n' ;
    std :: getline(std::cin , t1.titre);

    t1.emprunte = false ;

    std :: cout << "emprunte ? oui ou non " << '\n' ;
    std :: getline(std::cin , reponse );

    t1.emprunte = (reponse =="oui")? true : false;
    //reponse est une string alore tu nest pas le droit de test suel !

    return t1 ;
}

void afficherLivre(TLivre L) {
     for ( int i = 0 ; i < 20 ; i ++) {
         std :: cout << "*"  ;
     }
    std :: cout << '\n';
    std :: cout << " Titre: " << L.titre  << '\n' ;
    std :: cout << "Auteur: " << L.auteur   << '\n' ;
    std :: cout << "L’état du livre: " << (L.emprunte? "emprunté" :  "non emprunté" ) << '\n';


    // comment je peux affichier la valeur bool

    for ( int i = 0 ; i < 20 ; i ++) {
        std :: cout << "*" ;
    }
    std :: cout << '\n' ;
}

bool estEmprunte(TLivre L) {
    return L.emprunte ;
}

void emprunte(TLivre &L) {
    L.emprunte = true ;
}

void rend(TLivre) {

}

int main() {
    int n_livre;
    std::cout << "Entre le nombre de livre : " << '\n' ;
    std::cin >> n_livre ;
    std::cin.ignore() ;
    std::vector<TLivre> T(n_livre);

    for ( int i=0 ; i <n_livre ; i++) {
       T[i] =  SaisirLivre() ;
    }
    for (const TLivre& n : T) {
     afficherLivre(n);
    }

    return 0 ;
}