//WAP to delete an element of given index from array
#include<stdio.h>
int main(){
	int pos, i;
	int a[]={1,2,3,4,5};
	int n= sizeof(a)/sizeof(a[0]);
	printf("Enter position to delete (0-4) : ");
	scanf("%d", &pos);
	if(n<pos){
	    printf("Position value not possible");
	}
	else{
	    printf("Element at %d position is deleted. \n", pos);
	    printf("Updated Array : \n");
	    for(i=pos;i<n-1;i++){
		    a[i]=a[i+1];
	    }
	    n--;
	    for(i=0;i<n;i++){
		    printf("%d ", a[i]);
	    }
	}
	printf("\n");
	return 0;
}
