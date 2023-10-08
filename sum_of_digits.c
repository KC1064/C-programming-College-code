//WAP to find sum of digits of given integer
#include<stdio.h>
int main(){
	int n, digit, s=0;
	printf("Enter any number : ");
	scanf("%d", &n);
	while(n){
		digit = n%10;
		n=n/10;
		s+=digit;
	}
	printf("Sum of digits is %d \n", s);
	return 0;
}
