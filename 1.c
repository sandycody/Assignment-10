#include<stdio.h>

float area(float);
int main()
{
    float rad, res;
    printf("\n");
    printf("\nEnter the radius of a circle: ");
    scanf("%f", &rad);

    res = area(rad);
    printf("\nThe area of a circle is: %.3f", res);

    printf("\n\n");
    return 0;
}

float area(float r)
{
    float A;
    A = 3.14 * r * r;
    return A;
}