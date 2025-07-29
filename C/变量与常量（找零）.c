#include<stdio.h>
#include<stdlib.h>
int main()
{
	int amount;
	scanf("%d",&amount);
	const int TOTAL = amount;
	int price;
	scanf("%d",&price);
	int back;
	back = TOTAL-price;
	printf("’“¡„%d",back);
	system("pause");
	return 0;
}
