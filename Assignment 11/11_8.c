//WAP to find distance between two points where distance is term of x and y.Values are given one  for x and another y.
#include<stdio.h>
#include<math.h>
int distance(int a[], int b[]){
    int x_diff, y_diff;
    float dist;
    x_diff=a[0]-b[0];
    y_diff=a[1]-b[1];
    dist=sqrt(pow(x_diff, 2))+sqrt(pow(y_diff, 2));
    printf("Distance : %.2f \n", dist);
}

int main()
{
    int a[]={2,4};
    int b[]={6,3};
    distance(a,b);
    return 0;
}

