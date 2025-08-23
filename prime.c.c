#include<stdio.h>
int main()
{
    int a;
    int c=0;
    int i;
    printf("Enter The number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
     { 
         if(a%i==0)
         c++;
     }
      if(c==2)
         printf("Yes! Prime %d ",a);
      else if(a==1)
         printf("Neither Prime Nor Composite");
      else
         printf("Not Prime % d",a);
      
    return 0;
    
}
    