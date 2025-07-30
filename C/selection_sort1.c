#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5],i;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	int j;
	for(i=1;i<=4;i++)
	{
		for(j=i+1;j<=5;j++)
		{
			if(a[i]>a[j])
			{
				a[0]=a[i];
				a[i]=a[j];
				a[j]=a[0];
			 } 
		}
	}
	for(i=1;i<=5;i++)
	{
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
 } 
