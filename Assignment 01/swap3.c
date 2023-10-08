#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value of a-:");
	scanf("%d",&a);
	printf("Enter the value of b-:");
	scanf("%d",&b);
	printf("Intial values are %d %d", a,b);
       	c=a;
	a=b;
	b=c;
	printf("Final values are %d %d", a,b);

}
