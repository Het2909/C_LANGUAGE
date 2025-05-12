#include<stdio.h>
int main(){
	int num,reverse=0,rem;
	printf("enter original number: ");
	scanf("%d",&num);
	
	while(num!=0){
		rem=num%10;
		reverse=(reverse*10)+rem;
		num=num/10;
	}
	printf("reversed number is: %d",reverse);
	
	return 0;
}
