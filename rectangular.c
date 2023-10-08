//WAP to convert a point in rectangular coordinate to polar coordinate
#include<stdio.h>
#include<math.h>

void main()
{	 float pi=3.14;
	 float x, y, r, theta;
	 printf("Enter cartesian coordinate x: ");
	 scanf("%f", &x);
	 printf("Enter cartesian coordinate y: ");
	 scanf("%f", &y);
	 r = sqrt(x*x + y*y);
	 theta = atan(y/x);
	 theta = 180.0 * theta/pi;
	 printf("Polar coordinate is: r = %0.2f and theta = %0.2f in degree", r, theta);
}
