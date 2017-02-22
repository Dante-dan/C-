#include <stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
    int x;
	int search(int a[],int x,int min,int max);
	int mid;
	scanf("%d",&x);
	mid=search(a,x,0,9);
	printf("%d\n",mid);
}
int search(int a[],int x,int min,int max)
{
	int mid;
	if(min>max) return 1;
	mid=(min+max)/2;
	if(x>a[mid])
	return search(a,x,mid+1,max);
	else if(x<a[mid])
	return search(a,x,min,mid-1);
	else 
	return mid;
}

