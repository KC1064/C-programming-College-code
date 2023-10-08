//WAP to multiply the content of two array and store in third array.
#include<stdio.h>
void main()
{
	int i,ar1[5],ar2[5],pro[5];
	printf("Enter first array:-\n");
	for(i=0;i<=4;i++)
	{
		printf("ar1[%d]=",i);	
		scanf("%d",&ar1[i]);
	}
	printf("Enter second array:-\n");	
	for(i=0;i<=4;i++)
	{
		printf("ar2[%d]=",i);	
		scanf("%d",&ar2[i]);
	}
	
	for(i=0;i<=4;i++)
	{
		pro[i]=ar1[i]*ar2[i];
	}
	
	printf("Sum of arrays:-");	
	for(i=0;i<=4;i++)
	{
		printf("\npro[%d]=%d",i,pro[i]);	
	}
		
}
