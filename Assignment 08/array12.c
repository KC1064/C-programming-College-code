//WAP to shuffle an array of elements by interchanging the even and odd positition
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9}, i, temp;
    for(i=0;i<8;i+=2){       
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(i=0;i<9;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}


