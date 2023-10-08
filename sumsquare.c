//WAP to find sum of square of first n-natural numbers
#include<stdio.h>
int main(){
	int i=0,n,sum=0,square;
	printf("Enter n-:");
	scanf("%d",&n);
	while(i<=n){

	//	square=i*i;
		sum=sum+(i*i);
		i++;
	}
	printf("Sum of the numbers-: %d\n",sum);
}
