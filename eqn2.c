#include<stdio.h>
#include<math.h>
void main(){
	int u,a,s;
	float v;
	printf("Enter the initial velocity-:");
        scanf("%d",&u);
	printf("Enter the distance coveered-:");
        scanf("%d",&s);
	printf("Enter the acceleration-:");
        scanf("%d",&a);
	v=pow(u,2)-2*a*s;
	printf("The final velocity is-: %f", sqrt(v));
}
