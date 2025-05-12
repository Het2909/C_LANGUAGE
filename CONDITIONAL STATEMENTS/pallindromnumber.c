#include<stdio.h>
int main(){
	int copy,num,reverse=0,rem;
	printf("enter original number: ");
	scanf("%d",&num);
	copy=num;
	while(num!=0){
		rem=num%10;
		reverse=(reverse*10)+rem;
		num=num/10;
	}
	if(copy==reverse){
		printf("number is pallindrom");
	}
	else{
		printf("not pallindrom");
	}
	
	return 0;
}
