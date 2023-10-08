//WAP to create a function to take user input into an array
# include<stdio.h>
int func(int size){
    int array[50];
    int i;
    //printf("enter the size of array:");
   // scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);  
        printf(" {%d}",array[i]);
                       // printf("Enter the values-:");
    }
    return 0;
}

int main(){
    func(6);    
return 0;
}