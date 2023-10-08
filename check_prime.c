//WAP to check wether a number is prime or not.
#include<stdio.h>
int main(){
	int n, x = 0;
	printf("Enter a number to check : ");
	scanf("%d", &n);
	for(int i=2;i<n;i++){
		if (n%i==0){
			x+=1;
		}
	}
	if(x==0){
		printf("%d is a prime number \n", n);
	}
	else{
		printf("%d is not a prime number \n", n);
	}
	return 0;
	
}
