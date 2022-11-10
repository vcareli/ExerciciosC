#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void affichetableau(int *tableau, int taille);
int sommetableau(int *tableau, int taille);
int qtdcaracteres(const char *chaine);

int main() {
    char senha[9];
    char senhausuario[9];
    int tamanho = 0;

    printf("\nDigite sua senha: ");
    scanf("%s", &senha);
    tamanho = qtdcaracteres(senha);
    if(tamanho < 8){
        printf("\nSua senha %s, tem %d caracteres. Uma senha deve ter 8 caracteres\n", senha, tamanho);
    }
    strcpy(senhausuario, senha);
    printf("\nSenha digitada: %s", senhausuario);
    printf("\nDigite novamente sua senha: ");
    scanf("%s", &senha);
    if(strcmp(senha, senhausuario) == 0){           //Se senhas sao identicas
        printf("\nSenha aceita!");
    }else{printf("\nSenha invalida !");}
    return 0;


}

void affichetableau(int* tableau, int taille) {
    int i;
    for (i = 0; i < taille; i++) {
        printf("%d\n", tableau[i]);
    }
}

int sommetableau(int* tableau, int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return somme;
}

int qtdcaracteres(const char *chaine){
    int numerocaracteres = 0;
    char letraautal = 0;

    do{
        letraautal = chaine[numerocaracteres];
        numerocaracteres++;
    }while(letraautal != '\0');

    numerocaracteres--;

    return numerocaracteres;
}
