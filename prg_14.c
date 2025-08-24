#include <stdio.h>

int main()
{
	int n;
	int m;
	printf("Input Two Integer\n");
	scanf("%d %d",&n, &m);
	printf("Addition of the two: %d",(n+m));
	printf("\nSubtraction of the two: %d",(n-m));
	printf("\nMultiplication of the two: %d",(n*m));
	printf("\nDivision of the two: %d",(n/m));

	return 0;
}