#include <stdio.h>
/*fac(int m)
{
	int i,temp=1;
	for(i=1;i<=m;i++)
		temp=temp*i;
	return (temp);
}*/  //�ǵݹ���׳�

/*fac(int m)
{
	if(m==0||m==1) return 1;
	else return (fac(m-1)*m);
}*/  //�ݹ鷨��׳�

/*int main()
{   int n,m;
	scanf("%d%d",&n,&m);
	printf("�����:%d\n",fac(m)/(fac(n)*fac(m-n)));
}*/	 //�ǵݹ��������

//�ݹ��㷨�������
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
	printf("�����:%d\n",c(n,m));
	return 0;
}



