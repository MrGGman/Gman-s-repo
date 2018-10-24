#include<stdio.h> 
#include<stdlib.h>
void interface();
void calendar();
void bank();
void supermarket();


int main()
{	
	interface();
    printf("请按键选择功能：");
    int n;
    scanf("%d",&n);
    switch(n)
	{
	case 1:
		
		{
		supermarket();
		int i;
		for(i=0;i<4;i++)
		{
		
		printf("\n");
		}
		printf("是否需要清屏,1清屏 2.菜单");
		int ch2;
    	scanf("%d",&ch2);
    	switch(ch2)
		{
		case 1:
		 {
		 
			system("cls");
			system("pause");
			main();
		
			}
		case 2:
			main();
			}
		
		
	case 2:
		{
		
		calendar();
		int i;
		for(i=0;i<4;i++)
		{
		
		printf("\n");
		}
		printf("是否需要清屏,1清屏 2.菜单");
		int ch1;
    	scanf("%d",&ch1);
    	switch(ch1)
		{
		case 1:
		 {
		 
			system("cls");
			system("pause");
			main();
		
			}
		case 2:
		{
			main();
			}
				}
		
		
		break;
		}
		
		
	case 3:
	{
		int i;
		bank();
		for(i=0;i<4;i++)
		{
		
		printf("\n");
			}
		printf("是否需要清屏,1清屏 2.菜单");
		int ch3;
    	scanf("%d",&ch3);
    	switch(ch3)
		{
		case 1:
		 {
		 
			system("cls");
			system("pause");
			main();
		
		}
		case 2:
			main();
		}
	
	}
		}
			}
				}


void interface()
{
	printf("*******************************\n");
	printf("*******欢迎使用多功能小助手******\n");
	printf("******    1.超市小助手    *****\n");
	printf("******    2.查看日历      *****\n");
	printf("******    3.银行存款 	  *****\n");
	printf("******  谢谢使用，请选择  *****\n");
	printf("*******************************\n");
}




void supermarket()
{
	int x,y,sum;
	printf("请输入商品价格和是否是会员（是：1，否：0）：\n");
	scanf("%d%d/n",&x,&y);
	if(x>=100)
	{
	if(y==0)
	sum=0.9*x;
	else if(y==1)
	sum=0.8*x;
    }
    else if(x<100)
    {
      if(y==0)
      sum=x;
      else if(y==1)
      sum=0.9*x;
	}
	printf("商品的价格为%d\n",sum);
}










void calendar()
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


void bank()
{
	int money,year,Money;
	printf("请输入你的存款以及你要存款的时间\n");
	scanf("%d%d",&money,&year);
	Money=0.2*year*money+money;
	
	printf("%d年后你将获得%d元",year,Money);
	 
	
}












