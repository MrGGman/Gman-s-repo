#include<stdio.h> 
#include<stdlib.h>
void interface();
void calendar();
void bank();
void supermarket();


int main()
{	
	interface();
    printf("�밴��ѡ���ܣ�");
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
		printf("�Ƿ���Ҫ����,1���� 2.�˵�");
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
		printf("�Ƿ���Ҫ����,1���� 2.�˵�");
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
		printf("�Ƿ���Ҫ����,1���� 2.�˵�");
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
	printf("*******��ӭʹ�ö๦��С����******\n");
	printf("******    1.����С����    *****\n");
	printf("******    2.�鿴����      *****\n");
	printf("******    3.���д�� 	  *****\n");
	printf("******  ллʹ�ã���ѡ��  *****\n");
	printf("*******************************\n");
}




void supermarket()
{
	int x,y,sum;
	printf("��������Ʒ�۸���Ƿ��ǻ�Ա���ǣ�1����0����\n");
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
	printf("��Ʒ�ļ۸�Ϊ%d\n",sum);
}










void calendar()
{
	int year,month,sum=0;
	int i,week,monthday=0;
	int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("����һ����ݺ��·�\n");
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
	printf("��\tһ\t��\t��\t��\t��\t��\n");
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
	printf("��������Ĵ���Լ���Ҫ����ʱ��\n");
	scanf("%d%d",&money,&year);
	Money=0.2*year*money+money;
	
	printf("%d����㽫���%dԪ",year,Money);
	 
	
}












