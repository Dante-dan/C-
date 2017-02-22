#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	int c[101],alen,blen,clen=0,x,y,z=0;
	gets(a);
	gets(b);
	alen=strlen(a)-1;
	blen=strlen(b)-1;
	while(alen>=0||blen>=0)
	{
		if(alen>=0)x=a[alen]-'0';
		else x=0;
		if(blen>=0)y=b[blen]-'0';
		else y=0;
		c[clen]=x+y+z;
		z=c[clen]/10;
		c[clen]%=10;
		alen--;
		blen--;
		clen++;
	}
	if(z>0)
		c[clen]=z;
	else
		clen--;
	for(;clen>=0;clen--)
		printf("%d",c[clen]);
}


		




	
