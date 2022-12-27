#include <stdio.h>
#include <stdlib.h>

typedef struct	Coordonees	Coordonees;
struct	Coordonees
{
	int	x;
	int	y;
	int	z;
};

int	main()
{
	Coordonees	tableau[50];
	int *memoriaAlocada = NULL;

	memoriaAlocada = malloc(50 * sizeof(Coordonees));
	/*
	printf("char : %ld byte\n", sizeof(char));
	printf("int : %ld bytes\n", sizeof(int));
	printf("long : %ld bytes\n", sizeof(long));
	printf("double : %ld bytes\n", sizeof(double));
	printf("Coordonees : %ld bytes\n", sizeof(Coordonees));
	*/
	if (memoriaAlocada == NULL)
		exit(0);
	free(memoriaAlocada);
	return (0);
}
