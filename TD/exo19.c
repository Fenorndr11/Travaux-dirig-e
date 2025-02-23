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
                if (a==1)
                {
                     printf("\nCes deux nombres sont premiers entre eux car pgcd=1");
                }
                else
                {
                    printf("\nCes deux nombres ne sont pas premiers entre eux car pgcd!=1");
                }


            return 0;
}
