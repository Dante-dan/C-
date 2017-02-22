#include <stdio.h>
int main()
{
	int a=5,b=3,c=4;
	int d;
	a=a>b?a:b;
	d=a>c?a:c;
	printf("%d",d);
	return 0;
}