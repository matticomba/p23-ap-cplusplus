#include <iostream>
int main()
{
 // je crée un tableau de 4 caractères
 char tab[4]{"abc"};
 // qui est réinterprété en un entier de valeur 6513249
 // (qui est la représentation binaire de 'a' 'b' 'c' '\0')
 int *ptabi = reinterpret_cast<int *>(tab);
 // c'est 6513249
 std::cout << *ptabi << std::endl;
 // je fais l'inverse
 // je prends un entier de valeur 6513249
 int i = 6513249;
 // je le réinterprète en un pointeur vers un char
 // comme il y a 4 chars qui se suivent, c'est un tableau de 4
//caractères
char *pi = reinterpret_cast<char *>(&i);
 for (int i = 0; i < sizeof(int); i++)
 {
 //
 std::cout << pi[i] << " ";
 }
 std::cout << std::endl;
 return 0;
}