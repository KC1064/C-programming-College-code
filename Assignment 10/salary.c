//WAP to calculate gross salary
#include<stdio.h>
int office(float salary){
	float DA,HRA,G_salary;
	DA=0.60*salary;
	HRA=0.15*salary;
	G_salary=salary+DA+HRA;
	printf("The basic salary is %f\n The DA is %f\n The HRA is %f\n And the gross salary is %f\n",salary,DA,HRA,G_salary);
	return 0;
}
int main(){
	float salary=40000000;
	office(salary);
	return 0;
}
