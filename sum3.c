//WAP to fimd the sum of the series
#include<stdio.h>
#include<math.h>
void main(){
	int i=0,sum=0,n;
	printf("Enter the value of n-:");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+pow(7,i);
		i++;
	}
	printf("The sum of the series-:%d",sum);
}
