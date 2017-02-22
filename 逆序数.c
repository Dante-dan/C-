#include <stdio.h>
int main()
{
int n,digits=0,flag=0;
scanf("%d",&n);
while(n!=0)
{
	if(flag==0&&n%10!=0) flag=1;
	if(flag!=0)
	{
		printf("%d",n%10);
		digits++;
	}
	n/=10;
}
printf("\n逆序数的位数=%d",digits);
}