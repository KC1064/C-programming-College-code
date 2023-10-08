#include<stdio.h>
int main(){
    int i,j,x=1,temp,y=0;
    for(i=1;i<6;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=6-i;j++){
            printf("%d ",x);
            temp=x;
            x=y;
            y=temp;
            
        }
        if(i%2==0){
            temp=x;
            x=y;
            y=temp;
        }
        printf("\n");
    }
    return 0;
    }
