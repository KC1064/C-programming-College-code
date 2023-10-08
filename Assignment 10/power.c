//WAP to find power of a no. for both +ve,-ve
#include<stdio.h>
#include<math.h>
int power(int num,int t){
	int a;
	float b;
	a=pow(num,+t);
	b=pow(num,-t);
	printf("The power of the number %d for positve %d is %d\n for negative it is %f\n ",num,t,a,b);
}

int main(){
	int num=4,t=2;
	power(num,t);
	return 0;
}
