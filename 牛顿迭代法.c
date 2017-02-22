#include<stdio.h>
#include<math.h>
int main()
{
	double x0,x1,f0,f1;
	x1=1.5;
	do
	{
		x0=x1;
		f0=((2*x0-4)*x0+3)*x0-6;
		f1=(6*x0-8)*x0+3;
		x1=x0-f0/f1;
	}
	while(fabs(x1-x0)>=1e-5);
	printf("%lf",x1);
	return 0;
}


