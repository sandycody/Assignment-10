#include<stdio.h>

int perm(int, int);
int main()
{
    int items, selections, res;
    printf("\nEnter the number of total items: ");
    scanf("%d", &items);
    printf("\nEnter the number of selections: ");
    scanf("%d", &selections);
    
    res = perm(items, selections);

    if (items < selections)
        res;

    else
        printf("\nThe number of arrangements of %d items selected %d at a time is: %d", items, selections, res);
    
    printf("\n\n");
    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    if (n < 0)
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

int perm(int no, int r)
{
    if (no < r)
    {   
        int c; 
        c = printf("\nNumber of total items cannot be less than number of selections.", no, r);
        return c;
    }

    else
    {
        int num;
        num = fact(no) / fact(no - r);
        return num;
    }    
}