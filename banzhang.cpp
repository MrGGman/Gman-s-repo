#include<stdio.h>

//有n个人，从第一个人开始报数，数到3的人就出局
//最后留下的人就当选为班长 
int main(){
	
 int N[100];
 int *p;
 int i,n;
 int k=0;
 int m=0;//k报数计数器1~3    m淘汰人数计数器    i控制指针偏移 
 int sum=0;
 printf("请输入班里的人数：");
 scanf("%d",&n);
 p=N;
 
 	for(i=0;i<n;i++)
 	{									//将班里的人数用*p表示 
	  	*(p+i)=i+1;
		}

		 i=0;
	while(sum<n-1)				//从1开始如果到3就淘汰一位 
	{
		
		if(*(p+i)!=0)
			k++;				//k到就3淘汰 
		if(k==3)				
		{
			*(p+i)=0;
			k=0;				//k重置为0 
			sum++;				 
		}
		i++;
		if(i==n)
		i=0;
		}
	 printf("淘汰人数",sum);
	 
	 
	 for(i=0;i<n;i++)
	 {
	 	if(*(p+i)!=0)
	 	printf("班长是%d号",*(p+i));
	 }
	 
	 
	
	
	
}

