#include <stdio.h>
int main()
{
	int f1(int m,int n);
	int f2(int m,int n);
	int m,n;
	scanf("%d,%d",&m,&n);
	printf("最大公约数:%d,最小公倍数:%d\n",f1(m,n),f2(m,n));
	return 0;
}
int f1(int m,int n)
{   int t;
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	while(t!=0)
	{
		t=m%n;
		m=n;
		n=t;
		
	}
	return (m);
}
int f2(int m,int n)
{
	return (m*n/f1(m,n));
}








	