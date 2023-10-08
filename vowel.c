//WAP to check an inputted character is vowel or not
#include <stdio.h>
void main(){
	char input;
	printf("Enter the character you desire-:");
	scanf("%s",&input);
	if (input=='a' || input=='e' || input=='i'|| input=='o' || input=='u')
		printf("The character is a vowel");
	else
		printf("The character is not vowel");
}
