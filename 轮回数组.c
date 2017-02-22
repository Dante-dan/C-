#include <stdio.h>
int main()
{
	int i,n;
	char a[26],b[26];
	scanf("%d",&n);
	n%=26;
	for(i=0;i<=25;i++)
	{
		a[i]=i+97;
		b[25-i]=i+97;
	}
	for(i=n-1;i>=0;i--)
		printf("%c",b[i]);
	for(i=0;i<=25-n;i++)
		printf("%c",a[i]);
	printf("\n");
	return 0;
}



