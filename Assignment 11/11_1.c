//WAP to create a function to print array
int func_01(int array[]){
    int i;
    for(i=0; i<5; i++){
        printf("The value at index %d is %d\n",i,array[i]);
    }
    return 0;
}

int main(){
    int arr[]={21,22,31,32,41};
    func_01(arr);
    return 0;
}