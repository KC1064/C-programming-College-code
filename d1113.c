// WAP to find divisibility 11 and 13
#include <stdio.h>
void main(){
	int x;
	printf("The number is-:");
	scanf("%d",&x);
	if (x%11==0 && x%13==0)
		printf("The number is divisible by 11 and 13");
	else
		printf("The number is not divisible by 11 and 13");
}
