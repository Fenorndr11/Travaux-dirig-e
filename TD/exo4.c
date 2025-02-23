#include <stdio.h>

float main()
{
    float x, y, S, M;
    printf("Entrer une note :\t");
    scanf ("%f", &x);
    printf("Entrer une deuxième note :\t");
    scanf ("%f", &y);
    S=x+y;
    printf("La somme de ces deux notes est %.0f\n",S);
    M=S/2 ;
    printf("La moyen de ces deux notes est %.2f\n",M);
    return 0;
}

