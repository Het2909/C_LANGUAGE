#include<stdio.h>
int main(){
	int num,i,cnt=0;
	printf("enter a number: ");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			cnt++;
	}
}
if(cnt==0){
	printf("prime");
}
else
printf("not prime");
	return 0;
}
