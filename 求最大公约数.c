#include<stdio.h>
void main(){
	int m,n,a,M,N;
	printf("����m��n��ֵ��");
	scanf("%d%d",&m,&n);
	if(m>n){
		a=m;
		m=n;
		n=a;}
	for(M=m;M>0;M--){
		if(m%M==0&&n%M==0) {printf("m��n�����Լ����%d\n",M);
			break;}
	}
	N=m*n/M;
	printf("m��n����С��������%d\n",N);
}
