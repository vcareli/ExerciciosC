#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void initialiserCoordonees(Coordonees* point);
int main()
{
    struct Coordonees* point = NULL;

    initialiserCoordonees(&point);

    return 0;
}

void initialiserCoordonees(Coordonees* point){
    (*point).x = 0;
    (*point).y = 0;
    (*point).z = 0;
}
