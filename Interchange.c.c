#include <stdio.h>
int main()
{
    int a;
    int temp=0;;
    int b;
    printf("Enter The two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped numbers\n");
    printf("%d",a);
    printf("\n%d",b);
}