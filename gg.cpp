#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main()
{ 	
	srand(time(NULL));
	int a[10];
	int i;
	//a[i]=rand();
	for(i=0;i<10;i++)
	{	
		a[i]=rand()%100;
		printf("%d\t",a[i]);
	}
	int max;
	int mix=a[0];
	int cha;
	int sum=0;
	int k;
	int t;
	int n;
	float pingjun;
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("\n��������%d",max);
	for(i=0;i<10;i++)
	{
		if(mix>a[i])
		mix=a[i];
	}
	printf("\n��С������%d",mix);
	cha=max-mix;
	printf("\n���������ֵΪ��%d",cha);
	for(i=0;i<10;i++)
	{
	sum=sum+a[i];
	}
	pingjun=sum/10.00;
	printf("\n�����ƽ��ֵΪ:%.2f",pingjun);
	printf("\n");
	
	
	
	for(k=0;k<9;k++)
	for(i=k+1;i<10;i++) 
		if(a[i]>a[k])
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}

		for(i=0;i<10;i++)
		{
			printf("%d\t",a[i]);
		}
		
		
	printf("\n\n������Ҫ��ӵ���:"); 
	scanf("%d",&n);
	
	for(i=0;i<10;i++){
		if(	a[i]<n	)
		{
			a[i]=n;	
			for(n=10;n>=i;n--)
			{
				a[n]=a[n-1];
			}			
			break;
		}
		
	}

		printf("\n���֮�������\n");
	
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	}
