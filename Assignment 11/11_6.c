//WAP to create a function for sorting an array
#include<stdio.h>
int sort(int array[])
{
    int i, j, temp;
    for (i=0;i<8;++i){
            for (j=i+1;j<8;++j) {
                if (array[i]<array[j]) 
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    for(i=0;i<8;i++){
        printf("%d\n ", array[i]);
    }
    return 0;
}


int main(){
	int arr[]={12,43,25,53,75,7,74,89};
	printf("The sorted array-:\n");
	sort(arr);
	return 0;

}
