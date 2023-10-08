#include<stdio.h>
#include<math.h>
float series2(float num, float x){
    float sum=0,i;
    int fact=1;
    for(i=1;i<=num;i++){
        fact*=i;
        sum+=1+pow(x,i)/fact;
    }
    printf("Sum of the series is %f",sum);
    return 0;
}

int main(){
    series2(1,1);
    return 0;
}   