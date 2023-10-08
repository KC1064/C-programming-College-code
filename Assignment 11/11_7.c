//WAP to create a function for searching value in an array.
#include<stdio.h>
int search(int num){
	int i;
	int arr[20]={12,14,32,15,34,65,29};
	for(i=0;i<7;i++){
		if(arr[i]==num){
			printf("The number is available at index %d",i);
			break;
		}
		else{
			printf("The number is not available");
		}
	}
	
	return 0;
}

int main(){
	int x=12;
	search(x);
	return 0;
}

