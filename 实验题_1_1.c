#include <stdio.h>
int main()
{
	int n,i,j,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-i;j++)
		{
			printf("-");
		}
		for(m=1;m<=2*i-1;m++)
		{
			printf("*");
		}

		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=2*n-i;j>=1;j--)
		{
			printf("-");
		}
		for(m=2*i-1;m>=1;m--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

	
