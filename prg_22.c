#include <stdio.h>

int main()
{
    float cel;
    float f;
    printf("Input Temperatue in Celcius\n");
    scanf("%f",&cel);
    f=(cel*1.8) +32;
    printf("Temperatue in Fahrenheit %f",f);

    return 0;
}
