#include <iostream>


int main() {
    int i =12;
    int* pi = &i;
    (*pi)=13;
    int& ri =i;
    ri =81;
    //ri est une référence qui prend directement la valeur de i
}