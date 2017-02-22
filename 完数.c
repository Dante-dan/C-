#include<stdio.h>
int main()
{
	int a,i,n=0;
	for(a=1;a<1000;a++)
	{
		for(i=1;i<a;i++)
		{
			if(a%i==0) 
				n=n+i;
		}                                                 
		if(n==a)
		{
			printf("\n%d its factors are ",a);
				for(i=1;i<a;i++){
						if(a%i==0) printf("%d ",i);}
		}
        n=0;                   
	}
	return 0;
}
