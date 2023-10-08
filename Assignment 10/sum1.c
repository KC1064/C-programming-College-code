#include<stdio.h>
float series(float n){
    float sum=0,fact=1,i;
    for(i=1;i<=n;i++){
        fact*=i;
        sum+=1/fact;
    }

    printf("Sum of the series %.2f",sum);
    return 0;
}

int main(){
    series(2);
    return 0;
}
