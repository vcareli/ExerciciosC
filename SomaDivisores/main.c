#include <iostream>

using namespace std;

int main(){
    int n = 6;
    int somaDivisores = 0;
    for(int i = 1; i <= n; i++){
        if (n % i == 0){
            cout << i << endl;
            somaDivisores += i;
        }
    }
    cout << "\n" << somaDivisores << endl;
    return 0;
}
