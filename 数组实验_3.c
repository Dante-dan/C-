#include <stdio.h>
int main()
{
	int a[4][4],i,j,sum=0;
	printf("����һ��4*4����\n");
	for(i=0;i<=3;i++)
	for(j=0;j<=3;j++)
		scanf(" %d",&a[i][j]);
	
	for(i=0;i<=3;i++)
  
			sum=sum+a[i][i];
	
	printf("%d\n",sum);
	return 0;
}
