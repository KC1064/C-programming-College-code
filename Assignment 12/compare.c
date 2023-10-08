//WAP to compare two string without using library function
#include<stdio.h>
char compare(char a[],char b[]){
	int i,j;
	for(i=0;a[i]!='\0';i++){}
	for(j=0;b[j]!='\0';j++){}
	if(i==j){
		printf("The length of bothe the strings are same\n");
		if(a[i]!=b[j]){
			printf("The strings are dissimilar at index %d\n",i);
		}
		else{
			printf("The srings are same\n");
		}
	}
	else{
		printf("The length of the strings are not similar\n");
		if(i>j){
			printf("String %s is longer than %s\n",a,b);
		}
		else{
			printf("String %s is longer than %s\n",b,a);
		
		}
	}

}

void main(){
	char x[]="Kiron";
	char y[]="Mishra";
	compare(x,y);
}

