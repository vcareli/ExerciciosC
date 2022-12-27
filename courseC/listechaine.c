#include <stdio.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element
{
	int		nombre;
	Element	*suivant;
};

typedef struct Liste Liste;
struct	Liste
{
	Element	*premier;
};

Liste *initialisation(void)
{
	Liste	*liste = malloc(sizeof(*liste));
	Element	*element = malloc(sizeof(*element));

	if (liste == NULL || element == NULL)
		exit(EXIT_FAILURE);
	element->nombre = 0;
	element->suivant = NULL;
	liste->premier = element;
	return (liste);
}

void insertion(Liste *liste, int nNombre)
{
	Element *nouveau = malloc(sizeof(*nouveau));

	if (liste == NULL || nouveau == NULL)
		exit(EXIT_FAILURE);
	nouveau->nombre = nNombre;
	nouveau->suivant = liste->premier;
	liste->premier = nouveau;
}

void suppression(Liste *liste)
{
	if (liste == NULL)
		exit(EXIT_FAILURE);
	if (liste->premier != NULL)
	{
		Element *aSuprimer = liste->premier;
		liste->premier = liste->premier->suivant;
		free(aSuprimer);
	}
}

int depiler(Liste *liste)
{
	int		nombreDepile = 0;
	Element	*elementDepiler = liste->premier;

	if (liste == NULL)
		exit(EXIT_FAILURE);
	if (liste->premier != NULL)
	{
		nombreDepile = elementDepiler->nombre;
		liste->premier = elementDepiler->suivant;
		free(elementDepiler);
	}
	return (nombreDepile);
}

void afficherListe(Liste *liste)
{
	if (liste == NULL)
		exit(EXIT_FAILURE);
	Element *actuel = liste->premier;

	while (actuel != NULL)
	{
		printf("%d\n", actuel->nombre);
		actuel = actuel->suivant;
	}
}



int main()
{
    Liste *maListe = initialisation();

    insertion(maListe, 4);
    insertion(maListe, 8);
    insertion(maListe, 15);
	insertion(maListe, 16);
	insertion(maListe, 23);
	insertion(maListe, 42);
	printf("Etat de la pile:\n");
	afficherListe(maListe);
	printf("Je depile %d\n", depiler(maListe));
	printf("Je depile %d\n", depiler(maListe));
	printf("Etat de la pile:\n");
	afficherListe(maListe);
	//suppression(maListe);
	
    

    return 0;
}