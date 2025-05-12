#include<stdio.h>
int main()
{
	int n,sum=0,min,max,avg,c;
	again:
	
	printf("\nEnter any positive number :- ");

	if(scanf("%d",&n) && n!=-1)
	{
		if(n>0)
		{
			if(n>max)
			{
				max = n;
			}
			else
			{
				min = n;
			}
			sum = sum + n;
			c++;
		}
		else
		{
			printf("please enter positive num",n);	
		}
		
	}
	if(n==-1){
		goto again2;	
		}

	goto again;
	again2:
	
		printf("\nmin num = %d",min);
		printf("\nmax num = %d",max);
		printf("\nsum num = %d",sum);
		printf("\naverage value is = %d",sum/c);
		
			
	return 0;
}
