#include <stdio.h>
int main()
{
	int x,a,b,c,d,e;
	scanf("%d",&x);
	if(x>=1&&x<10) 
	{
		printf("这是一个个位数%d\n",x);}
	else if(x>=10&&x<100)
	{
		printf("这是一个十位数\n");
		a=x/10;
		b=x%10;
		printf("%d   %d",a,b);
		printf("倒序数：%d%d\n",b,a);
	}
	else if(x>=100&&x<1000)
	{
		printf("这是一个三位数\n");
		a=x/100;
		c=x%10;
		b=x%100/10;
		printf("%d   %d   %d\n",a,b,c);
		printf("倒序数：%d%d%d\n",c,b,a);
	}
	else if(x>=1000&&x<10000)
	{
		printf("这是一个四位数\n");
		a=x/1000;
		b=x%1000/100;
		c=x%100/10;
		d=x%10;
		printf("%d   %d   %d   %d\n",a,b,c,d);
		printf("倒序数：%d%d%d%d\n",d,c,b,a);
	}
	else if(x>=10000&&x<100000)
	{
		printf("这是一个五位数\n");
		a=x/10000;
		b=x%10000/1000;
		c=x%1000/100;
		d=x%100/10;
		e=x%10;
		printf("%d   %d   %d   %d   %d\n",a,b,c,d,e);
		printf("倒序数：%d%d%d%d%d\n",e,d,c,b,a);
	}
	else printf("输入错误\n");
	return 0;
}