#include <stdio.h>
int main()
{
	int j,k,m,n;
	k=8;
	j=10;
	m=++k;
	n=j++;
	printf("k=%d,j=%d,m=%d,n=%d",k,j,m,n);
	return 0;
}