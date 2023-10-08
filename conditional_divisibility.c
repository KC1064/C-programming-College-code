//Find the nearest no. to 1000 which is less than 1000 and divisible by 18 and 32
#include<stdio.h>
int main()
{
    int i=1000;
    for(i;;i--){
        if(i%18==0 && i%32==0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}
