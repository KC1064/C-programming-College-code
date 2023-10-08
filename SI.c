// WAp to calculate Simple interest
#include <stdio.h>
void main(){
	int P,R,T;
	printf("Enter the principal, rate of interest and time period-:");
	scanf("%d %d %d", &P,&R,&T);
	printf("The calculated interest is-: %d ", (P*R*T)/100);
}
