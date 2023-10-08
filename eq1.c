#include <stdio.h>
#include <math.h>
void main(){
	int u,a,t;
	printf("Enter the initial velocity-:");
	scanf("%d",&u);
	printf("Enter the time taken-:");
        scanf("%d",&t);
	printf("Enter the acceleration-:");
        scanf("%d",&a);
	printf("The distance covered is-: %f",u*t+(0.5*a*pow(t,2)));

}
