#include<stdio.h>
int main(){
	int age;
	float income,tax;
	printf("inptut the age:");
	scanf("%d",&age);
	printf("income if the age:");
	scanf("%f",&income);
	if(age > 18 && age < 55)
		tax = income * 0.1;
	else tax = 0;
	printf("tax is %f",tax);	
	return 0;
}
