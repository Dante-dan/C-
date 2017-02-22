#include <stdio.h>
void main(){
	int i,j=0,n=0;
	int a[13]={1};
	for(i=0;i<13;i++){
		a[i]=i+1;}
	while(j<=13){
		for(i=0;i<=12;i++){
		if(a[i]!=0) n++;
		if(n==5) {
			a[i]=0;
			n=0;
			j++;
				       printf("第%d次被淘汰的猴子是%d\n",j,i+1);
			}
		}
	}
}