#include <iostream>

int i = 12;

int main() {
    int i =17;
    int *pi= &i;
    // mets dans pi l'adresse de la case où est stockée dans i. &i donne l'adresse en mémoire de i
    i=14;
    (*pi) = (*pi) + 2;
    // (*pi) correspond à l'objet que l'adresse pi pointe. Ici c'est i.
    // les pointeurs fonctionnent sur tout
    std::cout<<(*pi)<<std::endl;


}