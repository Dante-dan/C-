#include <stdio.h>
/*fac(int m)
{
	int i,temp=1;
	for(i=1;i<=m;i++)
		temp=temp*i;
	return (temp);
}*/  //非递归求阶乘

/*fac(int m)
{
	if(m==0||m==1) return 1;
	else return (fac(m-1)*m);
}*/  //递归法求阶乘

/*int main()
{   int n,m;
	scanf("%d%d",&n,&m);
	printf("组合数:%d\n",fac(m)/(fac(n)*fac(m-n)));
}*/	 //非递归求组合数

//递归算法求组合数
int c(int n,int m)
{
	if(n==1) return (m);
	if(m==n) return 1;
	else return (c(n-1,m-1)+c(n,m-1));
}
	
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("组合数:%d\n",c(n,m));
	return 0;
}



