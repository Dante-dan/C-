#include <stdio.h>
int main()
{
	int year=1777,month=4,date=30,days;
	scanf("%d",&days);
	for(;days>1;days--)
	{
		date++;
		if(month>12) month=1,year++;
		if(month==4||month==6||month==9||month==11) 
		{
			if(date>30) date=1,month++;
		}
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
			if(date>31) date=1,month++;
		}
		if(month==2)
		{
			if(year%4==0&&year%100!=0||year%400==0)
			
			{if(date>29) date=1,month++;}
			
			else
				if(date>28) date=1,month++;
		}
	}
	printf("%d-%d-%d\n",year,month,date);
	return 0;
}

