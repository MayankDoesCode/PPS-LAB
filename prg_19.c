#include <stdio.h>

int main()
{
	int n;
	int m;
	printf("Input Two Integer\n");
	scanf("%d %d",&n, &m);
	printf("Sum of the two: %d",(n+m));
	printf("\nDifference of the two: %d",(n-m));
	printf("\nProduct of the two: %d",(n*m));
	printf("\nQuotient of the two: %d",(n/m));

	return 0;
}