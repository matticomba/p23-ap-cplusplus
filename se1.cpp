#include <iostream>

char* create_tab (int n) {
    //int t[n];
    //return t;
    // le problème de ce code est que t est une adresse d'un objet dans la pile d'exécution qui n'existe que temporairement.
    char* t = new char [n];
    return t;
}

void set_tab(char* tab,int n,int i, int val) {
    if (i<=n-1) {tab[i]=static_cast<char>(val);}
    else {std::cout<< "Indice overflow"<<std::endl;}
}

void print_tab (char* tab) {

}

int main () {
    int m = 3;
    char* tab = create_tab(m);
    tab[1]= 'a';
    set_tab(tab,m,2,33);
    set_tab(tab,m,5,7);
    std::cout <<tab[1]<< std::endl;
    std::cout <<tab[2]<< std::endl;
    delete [] tab;

}