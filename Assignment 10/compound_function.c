//WAP to caluclate compound interest
#include<stdio.h>
#include<math.h>
int compound(int P,float r,int n,int t){
	float total;
	total=P*pow((1+r/n),n*t);
	printf("For an investement of %d at rate %f for time %d\n Total investment is %f",P,r,t,total);
	return 0;
}

int main(){
	int P=1000,n=3, t=4;
	float r=.02;
	compound(P,r,n,t);
	return 0;
}
