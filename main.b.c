#include<stdio.h>
int main(){
	int age;
	float income,tax;
	printf("nasaa oruulna uu:");
	scanf("%d",&age);
	printf("tsalin bas nas:");
	scanf("%f",&income);
	if(age > 18 && age < 55)
		tax = income * 0.1;
	else tax = 0;
	printf("tatvar is %f",tax);	
	return 0;
}
