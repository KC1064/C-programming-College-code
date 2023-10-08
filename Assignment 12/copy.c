//WAP to copy a string to another using user defined string
#include<stdio.h>
char copy(char a[]){
	int i,j=0;
	char b[30];
	for(i=0;a[i]!='\0';i++,j++){
	b[j]=a[i];
	}
	b[j]='\0';
	printf("The string copied is %s",b);
}

char main(){
	char x[]="Kironmay";
	copy(x);
}
