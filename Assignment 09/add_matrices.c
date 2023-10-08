//Addition of 2 Matrix
#include<stdio.h>
int main(){
	int arr1[3][3]={{91,92,93},{94,95,96},{97,98,99}}, arr2[3][3]={{90,89,88},{83,84,85},{86,87,88}}, arr[3][3]={0},i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr[i][j]=arr1[i][j]+arr2[i][j];
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
