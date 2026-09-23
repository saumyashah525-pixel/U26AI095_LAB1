#include<stdio.h>
int main()
{
int n,i,j=1;
clrscr();
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
		{
		j=j*i;
		}
	printf("\nfactorial of the number is:%d",j);
}