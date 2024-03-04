#include <iostream>

const int i=12;

// const signifie que la variable ne pourra plus être modifiée
// i est dans le STATIQUE


int main () {
    int i;
    // si on veut la constante globale, on doit écrire ::i parce qu'on a donné le même nom
    // cette entier là est dans le STACK
    int *pi = new int;
    float *pf = new float;
    std::cout<<pi<<std::endl;
    // le new signifie qu'on veut aller dans le HEAP, il va donner l'adresse 
    // en mémoire dynamique de l'objet de type int
    //l'étoile signifie que c'est un type adresse
    delete pi;
    delete pf;
    // pour détruire l'entier et le float qui sont dans le tas, on écrit delete
    // suivi d'une adresse
}