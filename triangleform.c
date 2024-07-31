#include<stdio.h>
int main()
{
	int a1,a2,a3,sum;
	printf("enter 1st angle ");
	scanf("%d",&a1);
	printf("enter 2nd angle ");
	scanf("%d",&a2);
	printf("enter 3rd angle ");
	scanf("%d",&a3);
	sum = a1+a2+a3;
	if(sum=180)
	printf("traingle can be formed");
	else
	printf("triangle cannot be formed");
	return 0;
}
