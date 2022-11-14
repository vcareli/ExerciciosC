#include <stdio.h>
#include <stdlib.h>

//Variaveis Globais
char jogo[3][3];
int l, c;

int main(){
    int opcao;

    do{
        iniciarJogo();
        jogar();

        printf("Deseja jogar de novo? ");
        scanf("%d", &opcao);
    }while(opcao == 1);

    return 0;
}
