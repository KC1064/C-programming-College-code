#include<stdio.h>
int fibo(int num){
	int a=0, b=1, c=0, counter=0;
    while (counter<=num)
	{
		c=a;
		a+=b;
		b=c;
		printf(" %d", a);
		counter++;
	}
    return 0;
	
}

int main(){
    fibo(5);
    return 0;
}