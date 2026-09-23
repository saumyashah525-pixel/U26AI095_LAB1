#include<stdio.h>
int main()
{
int p,r,n,i;
clrscr();
	printf("enter the principal amount:");
	scanf("%d",&p);
	printf("\nenter the number of years:");
	scanf("%d",&n);
	printf("\nenter the rate:");
	scanf("%d",&r);
	i=(p*r*n)/100;
	printf("\nsimple interest is:%d",i);
}
