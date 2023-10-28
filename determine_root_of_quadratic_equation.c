#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float d, r1, r2;
    printf("Enter the values of a,b and c : ");
    scanf("%d%d%d", &a, &b, &c);
    d = pow(b, 2) - (4 * a * c);
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;
        printf("The roots are %f and %f ", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / 2 * a;
        r2 = -b / 2 * a;
        printf("The roots are %f and %f ", r1, r2);
    }
    else
    {
        printf("The roots are imaginary !!");
    }
    return 0;
}