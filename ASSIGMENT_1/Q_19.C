#include<stdio.h>
int main()
{
char c;
	printf("enter the character:");
	scanf("%s",&c);
	if(c>=65&&c<=91)
		{
		printf("\nit is not lowercase character.");
		}
	else if(c>=97&&c<=122)
		{
		printf("\nit is a lowercase character.");
		}
	else
		{
		printf("\nerror");
		}
}