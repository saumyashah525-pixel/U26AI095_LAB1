#include<stdio.h>
int main()
{
float salary,da,hra,gr;
	printf("enter the salary:");
	scanf("%f",&salary);
	da=salary*0.40;
	hra=salary*0.20;
	gr=salary+da+hra;
	printf("\ngross salary is:%f",gr);
}