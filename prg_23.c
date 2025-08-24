#include <stdio.h>

int main()
{   
    int m1;
    int m2;
    int m3;
    int avg;
    printf("Enter marks of 3 Subjects\n");
    scanf("%d %d %d",&m1 ,&m2,&m3);
    avg=(m1+m2+m3)/3;
    printf("Average marks of 3 Subjects %d",avg);
    

    return 0;
}
