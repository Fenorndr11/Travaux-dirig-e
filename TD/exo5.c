#include <stdio.h>
#include <math.h>
 int main()
{
    float a, b, c, delta, x1, x2, x0, im, re;
    printf("saisir la valeur de a:");
    scanf("%f",&a);
    printf("saisir la valeur de b:");
    scanf("%f",&b);
    printf("saisir la valeur de c:");
    scanf("%f",&c);
    printf("votre equation est donc %.1fx^2 + %.1fx + %.1fx = 0\n",a,b,c);

    delta=(b*b)-(4*a*c);
    if(a!=0)
    {
        printf("Delta=%.2f \n",delta);
        if(delta==0)
        {
            x0=(-b)/(2*a);
            printf("X1=X2=%.2f",x0);
        }
        else if (delta>0)
        {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("Les solution de cette equation sont x1= %.2f et x2= %.2f \n",x1,x2);
        }
        else if (delta<0)
        {
            re=(-b)/(2*a);
            im=(sqrt(-delta))/(2*a);
            printf("X1= %.2f + %.2fi \n", re, im);
            printf("X2= %.2f - %.2fi \n", re, im);
        }
    }
    else if(a==0)
    {
        printf("Et ce n'est pas une equation du seconde degre! ");
    }
return 0;
}
