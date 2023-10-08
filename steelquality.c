//WAP to determine the steel is graded or not.
#include<stdio.h>
void main(){
	int hardness,tensil;
	float carbon;
	printf("Enter the hardness of steel-:");
	scanf("%d",&hardness);
       	printf("Enter the carbon content of steel-:");
	scanf("%f",&carbon);
       	printf("Enter the tensil strength of steel-:");
	scanf("%d",&tensil);
	if (hardness>50 && carbon<0.7 && tensil>5600){
		printf("The grade of steel is 10");
	}
	else if (hardness>50 && carbon<0.7){
		printf("The grade of steel is 9");
	}
	else if (carbon<0.7 && tensil>5600)
		printf("The grade of steel is 8");
	else if (hardness>50 && tensil>5600)
		printf("The grade of steel is 7");
	else if (hardness>50 ||  carbon<0.7 || tensil>5600)
		printf("The grade of steel is 6");
	else
		printf("The grade of ssteel is 5");
		
}
