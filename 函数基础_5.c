#include <stdio.h>
int main()
{
	int max(int x[],int n);
	int x[100],i,n;
	printf("please input the length of the string:\n");
	scanf("%d",&n);
	printf("please input the element of the string:\n");
	for(i=0;i<=n-1;i++)
		scanf("%d",&x[i]);
	printf("the max element :%d\n",max(x,n));
	return 0;
}
int max(int x[],int n)
{
	int i,k=0;
	for(i=0;i<=n-1;i++)
		x[k]=x[i]>x[k]?x[i]:x[0];
	return x[k];
}
