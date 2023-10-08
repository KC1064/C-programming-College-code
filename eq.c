#include <stdio.h>
#include <math.h>
void main(){
	int a,b,c,d,t,x;
	printf("Enter the value of a,b,c and d-:");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	printf("Enter the value of x-:");
	scanf("%d",&x);
	t=a*pow(x,3)+b*pow(x,2)+c*x+d;
	printf("The value of t-: %d",t);
}
