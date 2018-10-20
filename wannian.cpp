#include<stdio.h>
int main()
{
	int year,month,sum=0;
	int i,week,monthday=0;
	int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("输入一个年份和月份\n");
	scanf("%d%d",&year,&month);
	if(year%4==0 && year%100!=0 || year%400==0)
		days[1]=29;
	for(i=1;i<year;i++)
	{
		if(i%4==0 && i%100!=0 || i%400==0)
			sum+=366;
		else
			sum+=365;
	}
	for(i=0;i<month-1;i++)
	{
		sum+=days[i];
	
	}
	sum+=1;
	if(month==1,3,5,7,8,10,12)
		monthday=31;
    if(year%4!=0 && month==2)
		monthday=28;
	if(year%4==0 && year%100!=0 || year%400==0 && month==2)
		monthday=29;
	if(month==4 || month==6 || month==9 || month==11)
		monthday=30;
	//printf("\n%d",sum);
	printf("日\t一\t二\t三\t四\t五\t六\n");
	week=(sum)%7;
 	for(i=0;i<week;i++)
	 {
 		printf("\t");
	 }

 	for(i=1;i<=monthday;i++)
	{
		 	printf("%d\t",i);
 			if((i+week)%7==0)
 				printf("\n");
 	
	}
}
