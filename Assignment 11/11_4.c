//WAP to create a function to delete one element in an array
# include<stdio.h>
int rem(int pos){
    int arr[50];
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position you want to delete-:");
    scanf("%d",&pos);
    if(pos<=0 || pos>n){
        printf("Invalid");
    }
    else{
        for(i=pos-1;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
    for (i=0; i<n;i++){
        printf("%d\n ",arr[i]);
    }

    return 0;

}

int main(){
    rem(5);
return 0;
}