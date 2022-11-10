#include <iostream>
#include "Dure.hpp"

using namespace std;

int main(){
    Duree duree1(0, 10, 28), duree2(0, 15, 2);

    if(duree1 < duree2)
        cout << "1er plus petit que 2eme" << endl;
    else
        cout << "1er plus grand que 2eme" << endl;

    return 0;
}
