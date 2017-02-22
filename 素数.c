#include <stdio.h>
void main()
{
	int a[101],i,j;
	for(i=0;i<=101;i++)
	a[i]=0;
	for(i=2;i<=101;i++)
	{
		if(a[i]==0)
		{
			for(j=i+1;j<=100;j++)
			{
				if(j%i==0)
				{
					a[j]=1;
				}
			}
		}
	}
	for(i=1;i<=100;i++)
	{
		if(a[i]==0) printf("%3d",i);
	}
}
			
					