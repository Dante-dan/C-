#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d",&x);
	if(x>=50&&x<=100) {y=2*x*x+3;}
	if(x>=32&&x<50) {y=x+2;}
	if(x>=0&&x<32) {y=x;}
	if(x>100) {printf("此处函数无定义\n");}
	printf("y=%d\n",y);
	return 0;
}
