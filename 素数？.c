#include <stdio.h>
int main(){
	int i,a[100],fm;
	while (i<=100)
	{
		a[i]=i+1;
	}
	for(i=0;i<100;i++)
	{
		if(a[i]!=1)
		{
			fm=a[i];
			for(i+=1;i<100;i++)
			{
				if(a[i]%fm==0) a[i]=1;
			}
		}
		
	}
	for(i=0;i<100;i++)
	{
		if(a[i]!=1) printf("%d\n",a[i]);
	}
	
	return 0;
}


