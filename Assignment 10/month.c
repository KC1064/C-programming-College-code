//WAP to print no. of days of month if month no. and year is given
#include<stdio.h>
int calendar(int year,int month){
	if (year%4==0 || year%100!=0 || year%400==0){
		printf("The year is a leap year\n");
		if(month==1 || month==3 || month==5 || month==7 || month==9 || month==11){
			printf("No. of days is 31");
		}
		else if (month==4 || month==6 || month==8 || month==10 || month==12){
			printf("No. of days is 30");
		}
		else{
			printf("No. of days is 29");
		}
			
	}
	else{
		printf("This is not a leap year\n");
		if(month==1 || month==3 || month==5 || month==7 || month==9 || month==11){
                        printf("No. of days is 31");
                }
                else if (month==4 || month==6 || month==8 || month==10 || month==12){
                        printf("No. of days is 30");
                }
                else{
                        printf("No. of days is 28");
                }

	}
	return 0;
}

//int main(){
//	int year=1993,month=5;
//	calendar(year,month);
//	return 0;
//}
int main(){
        int year=2016,month=2;
        calendar(year,month);
        return 0;
}
