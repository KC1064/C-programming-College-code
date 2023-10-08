//WAP to convert polar coordinates into cartesian coordinates

#include<stdio.h>
#include<math.h>

int main()
{	 float pi=3.14;
	 float x, y, r, theta;
	 printf("Enter radius of polar coordinate (r): ");
	 scanf("%f", &r);
	 printf("Enter angle of polar coordinate in degree (theta): ");
	 scanf("%f", &theta);
	 theta = theta * pi/180.0;
	 x = r * cos(theta);
	 y = r * sin(theta);
	 printf("Cartesian coordinates is: (%f,%f)", x, y);
	 return(0);
}

