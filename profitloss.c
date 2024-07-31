#include<stdio.h>
int main()
{
	float cp,sp;
	printf("enter cost price ");
	scanf("%f",&cp);
	printf("enter selling price ");
	scanf("%f",&sp);
	if(cp>sp)
	printf("loss");
	else
	printf("profit");
	return 0;
}
