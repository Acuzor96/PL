#include<stdio.h>
union salary{
	char name[5];
	char designation[5];
	int basic;
	
}s;

int main(){
	int ta,da,gross,basic;
	printf("enter the name=");
	scanf("%d",s.name);
	printf("\nenter your designation=");
	scanf("%d",s.designation);
	printf("\nenter your basic sallary=");
	scanf("%d",&s.basic);
	ta=0.05*s.basic;
	da=0.02*s.basic;
	gross=basic-(ta+da);
	printf("\ngross salary is =%d",gross);
	int size=sizeof(basic);
	printf("\nsize=%d",size);

return 0;
}
