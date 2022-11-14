#ifndef ARME_HPP_INCLUDED
#define ARME_HPP_INCLUDED

#include <iostream>
#include <string>

class Arme{
public:
    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;

private:
    std::string m_nom;
    int m_degats;
};

#endif // ARME_HPP_INCLUDED
