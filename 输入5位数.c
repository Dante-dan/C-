#include <stdio.h>
int main()
{
	int x,a,b,c,d,e;
	scanf("%d",&x);
	if(x>=1&&x<10) 
	{
		printf("����һ����λ��%d\n",x);}
	else if(x>=10&&x<100)
	{
		printf("����һ��ʮλ��\n");
		a=x/10;
		b=x%10;
		printf("%d   %d",a,b);
		printf("��������%d%d\n",b,a);
	}
	else if(x>=100&&x<1000)
	{
		printf("����һ����λ��\n");
		a=x/100;
		c=x%10;
		b=x%100/10;
		printf("%d   %d   %d\n",a,b,c);
		printf("��������%d%d%d\n",c,b,a);
	}
	else if(x>=1000&&x<10000)
	{
		printf("����һ����λ��\n");
		a=x/1000;
		b=x%1000/100;
		c=x%100/10;
		d=x%10;
		printf("%d   %d   %d   %d\n",a,b,c,d);
		printf("��������%d%d%d%d\n",d,c,b,a);
	}
	else if(x>=10000&&x<100000)
	{
		printf("����һ����λ��\n");
		a=x/10000;
		b=x%10000/1000;
		c=x%1000/100;
		d=x%100/10;
		e=x%10;
		printf("%d   %d   %d   %d   %d\n",a,b,c,d,e);
		printf("��������%d%d%d%d%d\n",e,d,c,b,a);
	}
	else printf("�������\n");
	return 0;
}