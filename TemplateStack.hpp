#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdexcept>

/* on peut soit faire une struct et tout sera public,
soit une classe pour avoir certaines choses privées
ie, uniquement accessible dans les {} de class*/

/* on fait un template pour avoir des stacks génériques. On peut lui rentrer le type, mais on pourrait écrire
template <typename T, int SIZE> auqeul cas on aurait pas besoin de constructeur et de destructeur*/


template <typename T>
class Stack
{
    // on crée une structure de pile avec attributs rang
    //  dans la pile nb, taille de la pile size,
    //  un tableau de char
    template <class U>
    friend std::ostream &operator<<(std::ostream &os, const Stack<U> &s);

private:
    int nb;
    int size;
    T *tab;

public:
    T top() const
    {
        if (is_empty())
        {
            throw "Stack empty";
        }
        return tab[nb - 1];
    }

    void print(std::ostream &os) const
    {
        os << '[';
        for (int i = 0; i <= nb - 1; i = i + 1)
        {
            os << tab[i] << ' ';
        }
        os << ']';
    }

    bool is_empty() const { return nb == 0; }
    /* le const avant l'accolade permet de dire que cette fonction
    est applicable sur des objets constants aussi*/

    bool is_full() const { return nb == size; }

    void push(T c);

    // on a la fonction push qui empile un élément sur
    // la pile

    T pop()
    {
        if (nb != 0)
        {
            nb = nb - 1;
            return tab[nb];
        }
        else
        {
            throw std::range_error("");
        }
    }

    // la fonction pop enlève le dernier élément de la
    // liste

    Stack(int n) : nb(0), size(n)
    {
        if (size <= 0)
        {
            throw std::invalid_argument("Bad Size");
            /*il s'agit d'une exception, on jette le code
            on peut soit gérer soit gronder le user
            ça arrête l'exécution de la fonction*/
        }
        else
        {
            this->tab = new T[n];
        }
    }
    // constructeur de base

    Stack(const Stack &rs) : nb{rs.nb}, size(rs.size)
    {
        this->tab = new T[size];
        for (int i = 0; i <= nb - 1; i = i + 1)
        {
            tab[i] = rs.tab[i];
        }
    }
    // constructeur de copie

    /* pour déclarer on peut mettre des parenthèses ou des {}, les accolades sont
    meilleures car il vérifie qu'on ne fait pas n'importe quoi en terme de types*/

    // on a le constructeur avec nom de la structure,
    // destructeur avec le tilda
    // en écrivant this->nb, c'est comme écrire nb mais
    // en disant que c'est un attribut de classe
    ~Stack()
    {
        delete[] tab;
    }

    Stack &operator=(const Stack &rs)
    {
        if (this != &rs)
        {
            delete[] tab;
            this->tab = new T[size];
            for (int i = 0; i <= nb - 1; i = i + 1)
            {
                tab[i] = rs.tab[i];
            }
            return (*this);
        }
        return (*this);
    }
    /* On renvoie une référence, on fait une copie si*/
};

template <class T>
inline void Stack<T>::push(T c)
{
    if (nb <= size - 1)
    {
        nb = nb + 1;
        tab[nb - 1] = c;
    }
    else
    {
        throw std::overflow_error("Stack overflow");
    }
}

/* On peut définir en dehors de la classe le constructeur
ou le destructeur. On écrit alors
Stack::~Stack () {delete [] tab;}*/

/*Quand on définit des fonctions en extérieur, pour
raccourcir en mémoire et sauter l'appel de fonction
pour ne garder que l'exécution du corps, on met inline
devant le Stack::foo()*/


template <class U>
inline std::ostream &operator<<(std::ostream &os, const Stack<U> &s)
{
    s.print(os);
    return os;
}

/* on peut définir la classe en utilisant print
ou on peut friend la fonction dans la classe pour avoir accès aux objets private*/

/* on renvoie un type std::ostream pour pouvoir chaîner
std est un namespace qui fait un paquet de fonctions*/