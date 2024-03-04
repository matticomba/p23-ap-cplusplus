#include <iostream>

int main () {
    char c;
    std::cout<<"Entrez un char ";
    std::cin>>c;
    if (c=='q') {
        std::cout<<"EXIT"<<std::endl;
    }
    else {
        std::cout<<"299792458 est un beau nombre "<<c;
    }
}