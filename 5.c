#include<stdio.h>

void oddNatural(int);
int main()
{
    int num;
    printf("\nEnter how many odd natural numbers to print: ");
    scanf("%d", &num);

    oddNatural(num);

    printf("\n\n");
    return 0;
}

void oddNatural(int n)
{
    printf("\nThe first %d odd natural numbers are: \n\n", n);
    
    for (int i = 1; i <= n; i++)
        printf("%d \t", 2*i-1);
}