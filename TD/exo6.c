#include <stdio.h>

int main()
{
    float a, b, C1, C2, M;

    printf("Entrer une note :\t");
    scanf ("%f", &a);
    printf("Entrer une deuxieme note :\t");
    scanf ("%f", &b);
    printf ( "Entrer le coefficient du 1er note: ");
    scanf("%f", &C1);
    printf ( "Entrer le coefficient du 2nd note: ");
    scanf("%f", &C2);

    M = ((C1*a)+(C2*b))/(C1+C2) ;
    printf ("La moyenne des deux notes est %.2f", M);

    return (0);


}
