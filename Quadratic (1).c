#include <stdio.h>

int main() 
{
    float a, b, c, d, r1, r2;

    printf("Enter coefficients X square, x and constant term ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are:\n");
        printf("Root1 = %f \nRoot2 = %f \n", r1, r2);
    }
    else if(d == 0) 
    {
        r1 = r2 = (-b / (2*a));
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %f\n", r1);
    }
    else 
    {
        float r = -b / (2*a);
        float i = sqrt(-d) / (2*a);
        printf("Roots are complex:\n");
        printf("Root1 = %f + %fi\n", r, i);
        printf("Root2 = %f - %fi\n", r, i);
    }
    return 0;
}