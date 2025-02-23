#include <stdio.h>

int main()
{


    int a;
    printf("Entrer un nombre quelconque:");
    scanf("%d", &a);
    if (a>=0) {
        printf("Ce nombre est positif!");
    }
    else{
        printf("Ce nombre est negatif!");
    }
}
