#include <stdio.h>
#include<string.h>
main()
{  int s[5];
   char a[5][50];
   int i,k=0;
   for(i=0;i<=4;i++)
	  { gets(a[i]);
        s[i]=strlen(a[i]);
                
   }
   for(i=0;i<=4;i++)
		if(s[k]<s[i])
			k=i;
		puts(a[k]);
}