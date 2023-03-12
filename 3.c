#include<stdio.h>

int oddEven(int);
int main()
{
    int res, num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = oddEven(num);

    if (res == 1)
        printf("\n%d is an even number.", num);

    else
        printf("\n%d is an odd number.", num);
        
    printf("\n\n");
    return 0;    
}

int oddEven(int n)
{
    if (n % 2 == 0)
        return 1;

    else
        return 0;    
}