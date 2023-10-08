//WAP to find the electricity bill.
#include<stdio.h>
int main(){
	int prev,pres,point;
	float price;
	printf("Enter previous reading-:");
	scanf("%d", &prev);
	printf("Enter present reading-:");
	scanf("%d",&pres);
	point=pres-prev;
	if (point>200){
		price=100*1.40+100*2.50+(point-200)*2.50;
	}
	else if (point>100){
		price=100*1.40+(point-100)*2.50;
	}
	else {
		price=point*1.40;
	}
	printf("Electric bill for given units is %f \n", price);
	return 0;
}
