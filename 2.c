#include<stdio.h>

float SI(int, float, int);
int main()
{
    int principle, time;
    float rate, res;
    printf("\n");
    
    printf("\nEnter Principle amount: ");
    scanf("%d", &principle);
    printf("\nEnter the rate of interest: ");
    scanf("%f", &rate);
    printf("\nEnter the time: ");
    scanf("%d", &time);

    res = SI(principle, rate, time);
    printf("\nThe simple interest is : %.3f", res);

    printf("\n\n");
    return 0;
}

float SI(int P, float R, int T)
{
    float S_Interest; 
    S_Interest = (P * R * T) / 100;
    return S_Interest;
} 