#include<stdio.h>
int main()
{
char c;
	printf("enter the character:");
	scanf("%c",&c);
	if(c>=65&&c<=91)
		{
		printf("\nit is an uppercase character.");
		}
	else if(c>=97&&c<=122)
		{
		printf("\it is a lowercase character.");
		}
	else
		{
		printf("\nit is a special character.");
		}
}