#include <stdio.h>

int fact(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = fact(num);

    if (num < 0)
        res;
        
    else    
        printf("\nThe factorial of %d is: %d", num, res);

    printf("\n\n");
    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    else if (n < 0)
    {    
        int c;
        c = printf("\nThe factorial of %d is not defined.", n);
        return c;
    }

    else
    {
        int fac = 1;
        for (int i = 1; i <= n; i++)
            fac = fac * i;

        return fac;
    }
}