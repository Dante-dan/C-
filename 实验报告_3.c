#include <stdio.h>
int main()
{
	int a,b;
	float c,d;
	long e,f;
	unsigned int u,v;
	char c1,c2;
	scanf("%d,%d",&a,&b);
    scanf("%f,%f",&c,&d);
	scanf("%d,%d",&e,&f);
	scanf("%o,%o",&u,&v);
	getchar();
	scanf("%c,%C",&c1,&c2);
	printf("\n");
    printf("a=%7d,b=%7d\n",a,b);
	printf("c=%10.2f,b=%10.2f\n",c,d);
    printf("e=%17ld,f=%17ld\n",e,f);
	printf("u=%v,v=%u\r\n",u,v);
	printf("c1=%c,c2=%c\n",c1,c2);
}
