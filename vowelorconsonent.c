#include<stdio.h>
int main()
{
	char i;
	printf("enter vowel or consonant");
	scanf("%c",&i);
	switch(i)
	{
		case 'a':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'e':
		printf("vowel");	
			break;
		default:
		printf("consonant");
	}
	
	return 0;
}
