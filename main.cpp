#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include "perso.hpp"

void play(){
    char c;
    do {
        std::cout<<"Entrez une action :\n";
        std::cin>>c;

    } while (c!='q');
}


int main(){

    std::cout<<"Bonjour ! Bienvenue dans le monde merveilleux de Mineguo !" <<std::endl;
    Perso P;
    std::cout<< "Dans ce monde magnifique vous pouvez endosser différents rôles, il est temps de choisir le vôtre."<<std::endl;
    char c;

    std::cout<<" Tapez la lettre correspondante :"<<std::endl;
    std::cout<<"Guerrier --> g"<< std::endl;
    std::cout<<"Voleur --> v"<< std::endl;
    std::cout<<"Mage --> m"<< std::endl;
    std::cin>>c;
    
    if (c=='g') {
        std::string n = P.nom;
        std::string r = P.race;
        Guerrier G(n,r);
        P= G;
    }
    if (c=='v') {
        std::string n = P.nom;
        std::string r = P.race;
        Voleur V(n,r);
        P= V;
    }
    if (c=='m') {
        std::string n = P.nom;
        std::string r = P.race;
        Mage M(n,r);
        P= M;
    }

    P.show_attribute();
    
}