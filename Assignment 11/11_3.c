//WAP to create a tablevof derivative 5x^3 for x=[1,2,3,4,5,6]
# include<stdio.h>
int derivative(int array[50]){
    int i;
    printf("The derivative of 5x^3 is 15x^2\n");   
    printf("[x]\t [D]\n");

    for(i=0;i<6;i++){
        printf("%d\t %d\n",array[i],15*(i+1)*(i+1));
    }
    return 0;
}

int main(){
    int var[]={1,2,3,4,5,6};
    derivative(var);
    return 0;
}