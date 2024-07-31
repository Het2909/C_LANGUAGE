#include<stdio.h>
int main()
{
	int num,rem,sum;
	printf("enter a number: ");
	scanf("%d",&num);
	rem=num%10;
	num=num/100;
	printf("%d\n",rem);
	printf("%d\n",num);
	sum=rem+num;
	return 0;
}
