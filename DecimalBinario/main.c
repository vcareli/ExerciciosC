#include <stdio.h>
#include <stdlib.h>

/*

Transforma decimal em binario:
Ex:
D       Q  R
3 / 2 = 1  1
1 / 2 = 0  1
3(10) => 011(2)

Ex:
4 / 2 = 2 0
2 / 2 = 1 0
1 / 2 = 0 1
4(10) => 0100(2)
*/
void binario(int decimal){
    int quociente = 0, resto = 0, dividendo = decimal;
    char bin;

    resto = (dividendo % 2);
    quociente = (dividendo / 2);
    if(decimal == 0){
        printf("%d", decimal);
    }else{
        binario(quociente);
        printf("%d", resto);
    }
}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("\n");
    binario(numero);
    return 0;
}
