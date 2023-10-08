//WAP to update the content of an array when element is given.
#include<stdio.h>
int main(){
  int i,t,a[10],n,m,s,j=0,b[10];
  printf("\nEnter the Limit:");
  scanf("%d",&n);
  printf("Enter the Values:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Given values are:\n");
  for(i=0;i<n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
  printf("The value to be updated-:");
  scanf("%d",&t);
  for(i=0;i<n;i++)
  {
    if(a[i]==t)
    {
       printf("Enter the updated value-:");
       scanf("%d",&s);
       a[i]=s;
    }
  }
  printf("\nUpdated value is:");
  for(i=0;i<n;i++)
  {
    printf("\na[%d]=%d",i,a[i]);
  }
  return 0;
}


