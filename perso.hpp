#pragma once
#include <iostream>
#include <string>


class Element{
public:
    int posx;
    int posy;
};

class Objet : public Element{
public:
    int sante;
    int force;
    int niveau;
};


class Perso : public Element
{
public:
    std::string nom;
    int niveau;
    int exp;
    std::string race;
    int sante ;
    int agi;
    int force;

    Perso(std::string name = "NULL", std::string race = "NULL", int s=5, int a=5, int f=5) : race(race),nom(name),force(f), agi(a), sante(s), niveau(1), exp(0)
    {   if (nom=="NULL"){
        std::cout << "comment vous appelez-vous ? " << std::endl;
        std::cin >> nom;};
        if (race == "NULL")
        {
            std::cout << "Quelle est votre race (elfe, humain, démon, nain...) ? ";
        std::cin >> race;
        };
        
        
    }

    /*virtual void coup_de_poing() const = 0;*/

    void parler()
    {
        std::cout << "Bien le bonjour !";
    }

    virtual void show_attribute() const {
        std::cout << "Nom : " << nom << std::endl;
        std::cout << "race : " << race << std::endl;
        std::cout << "Niveau : " << niveau << std::endl;
        std::cout << "Exp : " << exp <<" /10"<< std::endl;
        std::cout << "Santé : " << sante << std::endl;
        std::cout << "Agilité : " << agi << std::endl;
        std::cout << "Force : " << force << std::endl;

    }

    
};

class Guerrier : public Perso
{
public:
    int berserk;

    Guerrier(std::string name = "NULL", std::string race = "NULL",int s = 20, int a = 8, int b = 10, int f = 15) : Perso(name,race, s, a, f), berserk(b)
    {
    }

    void show_attribute()
    {
        Perso::show_attribute();
        std::cout << "Berserk : " << berserk << std::endl;
    }
};

class Mage : public Perso
{
public:
    int mana;

    Mage(std::string name = "NULL", std::string race = "NULL",int s = 20, int a = 8, int m = 10, int f = 15) : Perso(name,race, s, a, f), mana(m)
    {
    }

    void show_attribute()
    {
        Perso::show_attribute();
        std::cout << "Mana : " << mana << std::endl;
    }
};

class Voleur : public Perso
{
public:
    int stealth;

    Voleur(std::string name = "NULL", std::string race = "NULL",int s = 20, int a = 8, int st = 10, int f = 15) : Perso(name,race, s, a, f), stealth(st)
    {
    }

    void show_attribute()
    {
        Perso::show_attribute();
        std::cout << "Stealth : " << stealth << std::endl;
    }
};