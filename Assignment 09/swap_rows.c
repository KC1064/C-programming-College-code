//WAP to swap two rows in a given matrix
#include<stdio.h>
int main(){
	int arr[3][3]={{12,56,23},{64,45,11},{19,22,76}},i,j,temp;
	for(i=1;i<2;i++){
		for(j=0;j<3;j++){
			temp=arr[i][j];
			arr[i][j]=arr[i+1][j];
			arr[i+1][j]=temp;
		}
	}
	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d ", arr[i][j]);
                }
                printf("\n");
        }
	return 0;
}
