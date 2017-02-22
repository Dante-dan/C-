#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		for(j=2;j<=2*n-i;j++)
		{
			printf("-");
		}
		printf("*");
		for(j=1;j<=2*i-3;j++)
		{
			printf("-");
		}
		if(i!=1) printf("*");
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{

		for(j=2;j<=2*n-i;j++)
		{
			printf("-");
		}
		printf("*");
		for(j=1;j<=2*i-3;j++)
		{
			printf("-");
		}
		if(i!=1) printf("*");
		printf("\n");
	}
	return 0;
}
