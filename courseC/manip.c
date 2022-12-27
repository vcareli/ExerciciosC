#include <stdio.h>
#include <stdlib.h>

# define TAILLE_MAX		1000


int main(void)
{
	//int age = 0;
    //int letraporletra = 0;
	char texto[TAILLE_MAX] = "";
	FILE* fichier = NULL;
	
/*
	fichier = fopen("vini.txt", "w+");
	if (fichier != NULL)
	{
		printf("Escreva sua idade: ");
		scanf("%d", &age);
		//Ecrire dans le fichier
		//fputc escrever um caracter no arquivo
		//fputs escreve varios
		//fprintf escreve com dados de variavel
		fputc('V', fichier);
		fputs("inicius Careli\n", fichier);
		fputs("Debora Careli", fichier);
		fprintf(fichier, "\nSua idade e %d anos.", age);
		fclose(fichier);
	}
*/
	//printf("\nLendo arquivo txt com fgetc:\n\n");
	fichier = fopen("vini.txt", "r");
	if (fichier != NULL)
	{
		//Lire dans le fichier
		//fgetc le um caracter no arquivo
		//fgets le varios mas uma linha por vez
		//fscanf le um conjunto formatado
		/*do
		{
			letraporletra = fgetc(fichier);	//Le letra a letra ate o fim
			printf("%c", letraporletra);
		} while (letraporletra != EOF);*/
		printf("\n\nLendo arquivo txt com fgets:\n\n");
		while (fgets(texto, TAILLE_MAX, fichier) != NULL)
			printf("%s", texto);
		fclose(fichier);
	}
	else
		printf("Arquivo nao encontrado.");
	printf("\n");
	return (0);
}
