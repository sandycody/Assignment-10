#include<stdio.h>

void primeFactor(int);
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    primeFactor(num);

    printf("\n\n");
    return 0;
}

void primeFactor(int num)
{
    printf("\nAll the prime factors of %d are: \n\n", num);
    for (int i = 2; num != 1; i++)
    {
        while (num % i == 0)
        {
            num = num / i;
            printf("%d", i);

            if (num != 1)
                printf(", ");
        }
    }
}