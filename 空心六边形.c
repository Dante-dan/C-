#include <stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);	
	for(i=1;i<=3*n-2;i++)
	{
		if(i>=1&&i<=n-1||i>=2*n-1&&i<=3*n-2) printf(" ");
		if(i>=2*n-1&&i<=3*n-1) printf("*");
	}
	printf("\n");
	for(j=2;j<=n;j++)
	{
		for(i=1;i<=3*n-2;i++)
		{
			if(i>=1&&i<=n-j||i>=n-j+2&&i<=2*n+j-2||i>2*n+j-1) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}






