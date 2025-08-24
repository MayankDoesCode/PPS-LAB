/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
