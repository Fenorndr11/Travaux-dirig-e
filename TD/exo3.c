#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Saisir a:");
    scanf("%d", &a);
    printf("Saisir b:");
    scanf("%d", &b);
    temp=b;
    b=a;
    a=temp;
    printf("a=%d, b=%d", a, b);
}
