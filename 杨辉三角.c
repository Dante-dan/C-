#inciude <stdio.h>
int main()
{
	int i,j;
	int a[10] [10]={{1},{1},{1},{1},{1},{1},{1},{1},{1},{1},};
	printf("%-5d\n",a[0][0]);
	for(i=1;i<=9;i++)
	{
				printf("%-5d",a[i][0]);
		for(j=1;j<=9;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			if(a[i][j]!=0) printf("%-5d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
		