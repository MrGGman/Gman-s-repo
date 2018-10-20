#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{ 	
	int i,j;
	int sum=0;
	int a[3][4];
	srand(time(NULL));
	printf("\t语文\t数学\t英语\t政治\t总分");
	printf("\n");
	for(i=0;i<3;i++)
	{	
		for(j=0;j<4;j++)
		{
			a[i][j]=rand()%100;
			printf("\t%d",a[i][j]);
			sum+=a[i][j];
			printf("\t%d",sum);
		}
		//printf("\t%d",sum);
		printf("\n");
		
	}}
