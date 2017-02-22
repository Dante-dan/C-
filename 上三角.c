#include "stdio.h"
main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{	for(j=1;j<=7*(i-1);j++)
	     printf(" ");  	
		for(j=1;j<=(10-i);j++)

		{printf("%d*%d=%-3d",i,j,i*j);
           	 if(j==(10-i))
           printf("\n");
		}
	
	}
}