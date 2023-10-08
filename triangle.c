// WAP to check the validity of triangle
#include<stdio.h>
int main(){
	int side1,side2,side3;
	printf("Enter side1-:");
	scanf("%d",&side1);
        printf("Enter side2-:");
        scanf("%d",&side2);
       	printf("Enter side3-:");
        scanf("%d",&side3);

	if (side1+side2>=side3 && side2+side3>=side1 && side3+side1>=side2)
		printf("The triangle is valid");
	else
		printf("The triangle is not valid");
	return 0;
}
