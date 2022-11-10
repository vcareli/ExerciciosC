#include <stdio.h>
#include <stdlib.h>

 struct Aluno{
    char nome[50];
    char sobrenome[50];
    int dia_nasc;
    int mes_nasc;
    int ano_nasc;
};

int main()
{
   struct Aluno ficha_aluno;

   printf("Digite nome do aluno: ");
   scanf("%s", ficha_aluno.nome);
   printf("Digite sobrenome do aluno: ");
   scanf("%s", ficha_aluno.sobrenome);
   ficha_aluno.dia_nasc = 17;
   ficha_aluno.mes_nasc = 03;
   ficha_aluno.ano_nasc = 1979;

   printf("Ficha do aluno: ");
   printf("%s %s - %d/%d/%d ", ficha_aluno.nome, ficha_aluno.sobrenome, ficha_aluno.dia_nasc, ficha_aluno.mes_nasc, ficha_aluno.ano_nasc);
   return 0;
}
