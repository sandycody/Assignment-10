#include<stdio.h>

void natural(int);
int main()
{
    int num;
    printf("\nEnter how many natural numbers to print: ");
    scanf("%d", &num);

    natural(num);

    printf("\n\n");
    return 0;
}

void natural(int n)
{
    printf("\nThe first %d natural numbers are: \n\n", n);

    for (int i = 1; i <= n; i++)
        printf("%d \t", i);
}