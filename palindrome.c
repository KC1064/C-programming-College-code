// WAP to check a number is palindrome or not.
#include<stdio.h>
int main(){
	int n,rev=0,remainder,num;
	printf("Enter an integer-:");
	scanf("%d",&n);
	num=n;
	while (n!=0){
		remainder=n%10;
		rev=rev*10+remainder;
		n/=10;
	}
	if (num==rev)
		printf("%d is a palindrome",num);
	else
		printf("The number is not a palindrome");
	return 0;
}

