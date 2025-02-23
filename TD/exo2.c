#include <stdio.h>

float main()
{
    float a, b;
    printf("Entrer un nombre a:");
    scanf("%f", &a);
    printf("Entrer un nombre b:");
    scanf("%f", &b);
    if ((a>0 && b>0)||(a<0 && b<0)){
        printf ("Le produit  de ces deux nombres est positif");
    }
    else {
        printf ("Le produit  de ces deux nombres est negatif");
    }
    return 0;
}
