#include <stdio.h>
int main()
{
	char c;
	int zero=0, one=0, n=0;
	while(1)
	{
		c=getchar();
		if(c=='\n') break;
		if(c=='0') zero++;
		else if(c=='1') one++;
		c=c-'0';
		n=n*2+c;
	}
	printf("zero=%d\none=%d\n%d\n",zero,one, n);
}