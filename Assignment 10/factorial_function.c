//WAP to find factorial of a number
#include<stdio.h>
int factorial(int num){
	int i;
	int fact=1;
	for (i=1;i<=num;i++){
		fact*=i;
	}
	printf("The factorial of %d\n is %d\n",num,fact);
	return 0;
}

int main(){
	int num=6;
	factorial(num);
	return 0;
}
