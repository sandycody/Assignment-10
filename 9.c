#include<stdio.h>

int digit(int, int);
int main()
{
    int num, dig, pos; 
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nEnter a digit: ");
    scanf("%d", &dig);

    pos = digit(num, dig);
    if (pos == 1)
        printf("\nNumber %d contains a given digit %d", num, dig);

    else    
        printf("\nNumber %d does not contain %d", num, dig);    

    printf("\n\n");
    return 0;
}

int digit(int n, int d)
{
    int res, count = 0;
    while (n != 0)
    {
        res = n % 10;
        
        if (res == d)
            return 1; 

        n = n / 10;
    }
    return 0;
}