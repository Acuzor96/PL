// Write a program to accept marks of five courses and if student is pass then find the grade obtained
//by student. If student scores aggregate greater than 75%, then the grade is distinction. If aggregate is
//60>and <75 then the grade is first division. If aggregate is >=50 and <60 then the grade is second
//division. If aggregate is >=40 and <50 then the grade is third division
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,grade,avg ;
	
	printf("enter your marks=");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	if(m1>40&&m2>40&&m3>40&&m4>40&&m5>40)
	printf("passs");
	else 
	{
	grade=m1+m2+m3+m4+m5;
	avg=(grade/5.0);
	if(avg>75)
	printf("\ndistinction");
	else if(avg>60&avg<75)
	printf("\nFirst class");
	else if(avg>=50&avg<60)
	printf("\nsecond class");
	else if(avg>=40&avg<50)
	printf("\nthird division");
	else
	printf("invalid");
	
	}
}
