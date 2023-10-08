//WAP to check whether a number is prime or not
#include<stdio.h>
int prime(int num){
	int i=2;
	int x;
	for (i=2;i<num;i++){
		if (num%i==0){
			x+=1;
		}
	}
	if (x==0){
		printf("%d is a prime number\n",num);
	}
	else{
		printf("%d is not a prime number \n",num);
	}
	return 0;
}

int main(){
	int num=23;
	prime(num);
	return 0;

}
