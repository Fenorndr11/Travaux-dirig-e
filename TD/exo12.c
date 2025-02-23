#include <stdio.h>


int main()
{
    int n, S;
    printf("Enter the number of the terms : ");
    scanf("%d", &n);

    S=(n*(n+1))/2;

    printf("The sum of this suit of number beginning to 1 is: S=%d", S);
    return (0);

}
