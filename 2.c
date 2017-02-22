#include <stdio.h>
void main()
{
	int i=0;
	float sum=0.0,temp,fz=2.0,fm=1.0,t;
	while(i<20)
	{
		temp=fz/fm;
		sum=temp+sum;
		t=fz;
		fz=fm+fz;
		fm=t;
		i++;
	}
	printf("\nsum=%f",sum);
}
