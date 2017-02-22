#include<stdio.h>
#include<math.h>
void main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++){
		for(j=1;j<=abs(i-n);j++)printf(" ");
		for(j=1;j<=2*(n-abs(i-n))-1;j++)printf("*");
		printf("\n");
		return 0;
	}
}