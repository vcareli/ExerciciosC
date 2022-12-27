#include <stdio.h>
#include <stdlib.h>

//rename renomear arq
//remove apagar

int main(void)
{
	int score[3] = {0};
	FILE* fichier = NULL;
	
	fichier = fopen("score.pnt", "r");
	if (fichier != NULL)
	{
        fscanf(fichier, "%d %d %d", &score[0], &score[1], &score[2]);
        printf("\nMaiores pontuacoes: %d pts - %d pts - %d pts", score[0], score[1], score[2]);
    	fclose(fichier);
	}
	else
		printf("Arquivo de scores nao encontrado.");
	printf("\n");
	return (0);
}
