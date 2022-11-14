#include <string>
#include <iostream>
#include "classes/Personnage.hpp"

using namespace std;

int main(){
    //Création
    Personnage davi, golias("Epee aiguisee", 20);

    //Combat
    golias.attaquer(davi);
    davi.boirePotionDeVie(20);
    golias.attaquer(davi);
    davi.attaquer(golias);
    golias.changeArme("Double Hache", 40);
    golias.attaquer(davi);

    //Temp fini
    cout << "Davi" << endl;
    davi.afficherEtat();
    cout << "Golias" << endl;
    golias.afficherEtat();

    return 0;
}
