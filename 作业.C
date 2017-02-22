int main()
{
	int x,y,z;
	x=y=2;
	z=3;
	y=x++-1;printf("%d\t%d\t",x,y);
	y=++x-1;printf("%d\t%d\t",x,y);
	y=z--+1;printf("%d\t%d\t",x,y);
	y=--z+1;printf("%d\t%d\t",x,y);
	return 0;
}