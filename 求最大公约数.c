#include<stdio.h>
void main(){
	int m,n,a,M,N;
	printf("输入m和n的值：");
	scanf("%d%d",&m,&n);
	if(m>n){
		a=m;
		m=n;
		n=a;}
	for(M=m;M>0;M--){
		if(m%M==0&&n%M==0) {printf("m和n的最大公约数是%d\n",M);
			break;}
	}
	N=m*n/M;
	printf("m和n的最小公倍数是%d\n",N);
}
