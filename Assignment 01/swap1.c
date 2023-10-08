#include <stdio.h>
void main(){
	int a,b;
	printf("Value of a-:");
	scanf("%d",&a);
	printf("Value of b-:");
	scanf("%d",&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("The values of a, b are %d %d",a,b);
}
