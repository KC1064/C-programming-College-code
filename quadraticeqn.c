//WAP to compute real roots of quaratic equation 
#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c,x;
	float root1,root2;
	printf("Enter values of a,b,c -:");
	scanf("%d %d %d",&a,&b,&c);
	if (a!=b){
		int discriminant=(b*b)-4*a*c;
		if (discriminant<0){
			printf("No real roots\n");
		}
	else {
		root1=-b+(sqrt(discriminant)/2*a);
		root2=-b-sqrt((discriminant)/2*a);
		printf("Roots of the equation are %f and %f \n",root1,root2);
	}
	if (a==0){
		root1=-c/b;
	}
}
