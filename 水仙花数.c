#include <stdio.h>
void main(){
	int a,b,c,A;
	for(a=1;a<=9;a++){
		for(b=0;b<=9;b++){
			for(c=0;c<=9;c++){
				A=a*100+b*10+c;
				if(A==a*a*a+b*b*b+c*c*c) printf("水仙花数为：%d\n",A);
			}
		}
	}
}

