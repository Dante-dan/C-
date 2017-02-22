#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[50];
	gets(a);
	i=strlen(a)-1;
	for( ;i>=0;i--)
	printf("%c",a[i]);
	return 0;
}
	