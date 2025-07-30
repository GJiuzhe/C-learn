#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j;
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				a[0]=a[i];
				a[i]=a[j];
				a[j]=a[0];
			 } 
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
 } 
