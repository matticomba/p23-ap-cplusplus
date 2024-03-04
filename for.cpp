#include <iostream>

int main () {
    int n=4;
    char tab [n];
    for (int i=0; i <n; i++) {
        char c;
        std::cin>>c;
        tab[i]=c;
    }
    // on crée un tableau de 4 cases. Tab est l'adresse du premier caractère. c'est un char*
    // tab+1 donne l'adresse du prochain élément après le premier
    // dans la pratique on écrit tab[i]
    char *t = new char [4];
    delete []t; // pour delete le tableau entier et pas que le premier élément que contient t
}