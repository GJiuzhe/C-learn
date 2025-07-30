#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max_h,apple[10],num=0,i;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&apple[i]);
	}
	scanf("%d",&max_h);
	for(i=0;i<=9;i++)
	{ 
		if(apple[i]>max_h)
		{
			if(apple[i]<=max_h+30)
			{
				num++;
			}
		}
		else
		{
			num++;
		} 
	}
	printf("%d",num);
	system("pause");
	return 0;
 } 
