#include <stdio.h>
int main()
{
	int fun(int j);
	int i, sum=0, r,temp;
	for(i=100;i<=50000;++i)
	{
			temp=i;
		while(temp!=0)
		{
			r=temp%10;
			sum=fun(r)+sum;
			temp=temp/10;
		}
		if(sum==i)
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}
int fun(int j)
{
	int f;
	if(j==0||j==1) f=1;
	else f=fun(j-1)*j;
	return (f);
}
		