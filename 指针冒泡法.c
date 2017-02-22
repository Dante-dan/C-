#include <stdio.h>
int main()
{
	int *p,i,j,a[1000],temp,n;
	printf("n=");
	scanf("%d",&n);
	for(p=a,i=0;i<6;i++,p++)
		scanf("%d",p);
    for(p=a,i=0;i<n-1;i++,p++)
	{
		for(j=i+1;j<n-i;j++)
		{
			if(*p>a[j])
			{
				temp=*p;
				*p=a[j];
				a[j]=temp;				
			}
		}
	}
	for(p=a,i=0;i<n;i++,p++)
	printf("%d ",*p);
	printf("\n");
}
		



