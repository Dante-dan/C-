#include <stdio.h>
int main()
{
	float f(float a,float b);
	float a,b;
	scanf("%f,%f",&a,&b);
	printf("%f",f(a,b));
	return 0;
}
float f(float a,float b)
{
	return((a-b)/(a+b));
}
