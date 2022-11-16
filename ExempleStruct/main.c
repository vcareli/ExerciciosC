#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
    int ano_nasc;
    int dia_nasc;
    int mes_nasc;
}DataNascimento;

typedef struct{
    DataNascimento dataNasc;
    char nome[100];
    char sexo;
}Pessoa;

int retornaAno(){
    int anoAtual;
    time_t data_ano;
    time(&data_ano);
    struct tm *data = localtime(&data_ano);
    anoAtual = (data->tm_year+1900);
    return anoAtual;
}

void imprimirPessoa(Pessoa i){

    printf("\n\n\tNome: %s", i.nome);
    printf("\tIdade: %d", (retornaAno() - i.dataNasc.ano_nasc));
    printf("\n\tData de nasc: %d/%d/%d", i.dataNasc.dia_nasc, i.dataNasc.mes_nasc, i.dataNasc.ano_nasc);
}

Pessoa lerPessoa(){
    Pessoa p;

    printf("\nNome: ");
    fgets(p.nome, 100, stdin);
    printf("\nData de nascimento (dd mm aaaa): ");
    scanf("%d%d%d", &p.dataNasc.dia_nasc, &p.dataNasc.mes_nasc, &p.dataNasc.ano_nasc);
    scanf("%c");
    printf("\nSexo: ");
    scanf("%c", &p.sexo);
    scanf("%c");

    return p;
}

int main(){
    Pessoa pessoas[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
            pessoas[i][j] = lerPessoa();
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
            imprimirPessoa(pessoas[i][j]);
    }
    return 0;
}
