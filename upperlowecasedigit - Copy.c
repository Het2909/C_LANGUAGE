#include<stdio.h>
int main()
{
	char c;
	printf("enter a character: ");
	scanf("%c",&c);
	if(c>='A'&& c<='Z')
	printf("Uppercase");
	else if(c>='a' && c<='z')
	printf("Lowercase");
	else if(c>='0' && c<='9')
	printf("digit");
	else
	printf("special case");
	return 0;
}
