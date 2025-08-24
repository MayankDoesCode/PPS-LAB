#include <stdio.h>

int main()
{   
    int p;
    int rate;
    int t;
    float SI;
    printf("Input Principle Amount, Rate, Time\n");
    scanf("%d %d %d",&p ,&rate , &t);
    SI=(p*rate*t/100);
    printf("Simple Interest: %f",SI);
    

    return 0;
}
