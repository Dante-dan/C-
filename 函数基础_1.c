#include <stdio.h>
int main()
{
	int x;
	void print(int x);
	printf("输入一个数：");
	scanf("%d",&x);
	print(x);
	return 0;
}
void print(int x)
{
	int i,j;
	for(i=1;i<=x;i++)
	{
		for(j=0;j<x-i;j++)
			printf(" ");
		for(j=0;j<2*i-1;j++)
			printf("*");
		printf("\n");
	}
}
	
