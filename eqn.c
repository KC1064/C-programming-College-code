// WAP to calculate x and print error in case of c=d
#include<stdio.h>
void main(){
	int a,b,c,d;
	float x;
	printf("Enter a-:");
        scanf("%d",&a);
	printf("Enter b-:");
        scanf("%d",&b);
	printf("Enter c-:");
        scanf("%d",&c);
	printf("Enter d-:");
        scanf("%d",&d);
	if (c==d)
		//printf("%f is the value of x",x);
		printf("No OUTPUT!");
	else{
		//printf("No OUTPUT!");
		printf("%f is the value of x",x);
	        x=(a-b)/(c-d);
	}

}
