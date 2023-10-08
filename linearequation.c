//WAP to calculate x
#include<stdio.h>
int main(){
	int a,b,c,d,m,n,x,y;
	printf("In equation ax+by=m");
	printf("The value of a-:");
	scanf("%d",&a);
	printf("The value of b-:");
        scanf("%d",&b);
	printf("In equation cx+dy=n");
	printf("The value of c-:");
	scanf("%d",&c);
	printf("The value of d-:");
	scanf("%d",&d);
	x=(m*d-b*n)/(a*d-c*b);
	y=(n*a-m*c)/(a*d-b*c);
	if (a*d-b*c==0)
		printf("Not possible");
	else
		printf("The value of x is %d and the value of y is %d",x,y);

}
