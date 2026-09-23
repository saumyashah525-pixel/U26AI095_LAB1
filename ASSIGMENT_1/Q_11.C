#include<stdio.h>
int main()
{
int t,h,m,s;
	printf("enter the total seconds:");
	scanf("%d",&t);
	h=t/3600;
	m=t/60;
	s=t-(h*3600);
	printf("\nhour:%d",h);
	printf("\nminutes:%d",m);
	printf("\nseconds:%d",s);
}
