#include<stdio.h>
int main ()
{
    int a,b,temp;
    printf("Entrer a : ");
    scanf("%d",&a);
    printf("\nEntrer b : ");
    scanf("%d",&b);

            while(b!=0)
                {
                temp = b;
                b = a % b;
                a = temp;
                }
            printf("\nle PGCD de ces deux nombres est %d .",a);

            return 0;
}
