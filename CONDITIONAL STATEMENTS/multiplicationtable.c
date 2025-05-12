#include<stdio.h>
int main(){
	int i,j,num,ans;
	printf("which table do you want?? ");
	scanf("%d",&num);
	printf("table till which number?? ");
	scanf("%d",&j);
	for(i=1;i<=j;i++){
		ans=num*i;
		printf("%d x %d = %d\n",num,i,ans);
	}
	return 0;
}
