//WAP to create a function to insert one element in array
#include<stdio.h>
int insert(int num){
    int arr[100]={10,22,45,68,98,78,64,24,87,21};
    int i, n=10;
    int pos;
    printf("Enter index (0-9):");
    scanf("%d",&pos);
    n++;
    for(i=9;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}


int main(){
	insert(12);
	return 0;

}

