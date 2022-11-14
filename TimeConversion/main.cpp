#include <iostream>
#include <string>

using namespace std;

void timeconv(string s){
    int h1 = (int)s[1] - '0';
    int h2 = (int)s[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    string aux = "", saida = "";

    // If time is in "AM"
    if (s[8] == 'A'){
        if (hh == 12){
            saida = "00";
            for (int i=2; i <= 7; i++){
                aux += s[i];
            }
        }
        else{
            for (int i=0; i <= 7; i++){
                saida += s[i];
            }
        }
    // If time is in "PM"
    }else{
        if (hh == 12){
            saida = "12";
            for (int i=2; i <= 7; i++){
                saida += s[i];
            }
        }
        else{
            hh = hh + 12;
            saida = std::to_string(hh);
            for (int i=2; i <= 7; i++){
                aux += s[i];
            }
        }
    }
    saida = saida + aux;
    cout << saida << endl;

    return;
}


int main(){
    string s = "05:01:00PM";

    timeconv(s);

    return 0;
}
