
#include <stdio.h>

int main()
{
    int a;
    int b;
    int z;
    int c=-1;
    printf("Enter The three numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&z);
    if(a>b && b>z)
    printf("Greatest Among Three %d",a);
    else if(a<b && b>z)
    printf("Greatest Among Three %d",b);
    else
    printf("Greatest Among Three %d",z);
    return 0;
}
