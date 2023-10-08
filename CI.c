#include <stdio.h>
#include <math.h>
void main(){
	int P,r,n,t;
	printf("Enter the principal value & Enter the interest rate & Enter the no. of times interest is compounded & Enter the time period-:");
	scanf("%d %d %d %d", &P,&r,&n,&t);
	printf("The future value of investment-: %f",P*pow((1+r/n),n*t));
}
