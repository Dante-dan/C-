#inlcude <stdio.h>
#include <string.h>
int main()
{
	char s[101];  
	int a[101]={0};
	int b[101]={0};
	int c[101]={0};
	int i,j,k,m,n;  
	int alen,blen,clen; 
	gets(s);  
	alen=strlen(s);  
	for(i=alen-1;i>=0;i--) 
		a[alen-i]=s[i]-'0'; 
	gets(s);  
	blen=strlen(s);  
	for(i=blen-1;i>=0;i--)  
		b[blen-i]=s[i]-'0'; 
	if(alen>blen) 
		clen=alen; 
	else  
		clen=blen;  
	for(i=1;i<=clen;i++) 
		c[i]=a[i]+b[i]; 
	for(i=1;i<=clen;i++) 
		if(c[i]>9)
		{ 
			c[i+1]++; 
			c[i]-=10; 
			if(i==clen) 
			clen++; 
		}  
	for(i=clen;i>=1;i--)  
		printf("%d",c[i]); 
	printf("\n"); 
}