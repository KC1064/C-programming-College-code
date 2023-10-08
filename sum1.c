//WAP to compute sum of n natural numbers
#include<stdio.h>    
void main()  
{  
    int n,i,s=0;  
    printf(" Enter n: ");  
    scanf("%d", &n);  
    for (i=0; i<n;i++)  
    {  
        s=s+i; 
    } 
    printf(" Sum of the first %d number is: %d", n,s);  
}  
