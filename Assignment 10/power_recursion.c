//WAP to find power of a number using recursions
#include<stdio.h>
#include<stdio.h>
int power(int n,int p);
int main(){
	int n,p;
	printf("Enter a number-:");
	scanf("%d",&n);
	printf("Power:");
	scanf("%d",&p);
	printf("%d raised to the power %d is %d\n",n,p,power(n,p));
	return 0;
}

int power(int n,int p){
	if (n>1 && p>0)
		return n*power(n,p-1);
	else
		return 1;
}
