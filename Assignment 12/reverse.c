//WAP to print a string in reverse order
#include<stdio.h>
char reverse(char a[]){
	char b[30];
	int i,j=0,k=1;
	for(i=0;a[i]!='\0';i++){}
		printf("%d",i);
	for(j=0;j<i;j++,k++){
		b[j]=a[i-k];}
		
	b[j]='\0';
	printf("The reverse string is %s\n",b);
	}


char main(){
	char x[]="Kiron";
	reverse(x);
}
