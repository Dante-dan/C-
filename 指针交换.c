#include <stdio.h>
int main()
{
	void swap(int *p1,int *p2);
	int a,b,c;
	int *p1,*p2,*p3;
	printf("Please input there umber:");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	if(a>b) swap(p1,p2);
	if(a>c) swap(p1,p3);
    if(b>c) swap(p2,p3);
	printf("The new number:");
	printf("%d  %d   %d\n",a,b,c);
	return 0;
}
void swap(int *p1,int *p2)
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;
}
