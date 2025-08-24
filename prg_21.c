#include <stdio.h>

int main()
{   
    float pi=3.14;
    int r;
    printf("Input The Radius Of Circle\n");
    scanf("%d",&r);
    printf("Area Of Circle: %f",(pi*r*r));
    printf("\nCircumference Of Circle: %d",(r/2));

    return 0;
}