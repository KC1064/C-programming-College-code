//WAP for a simple calculations.
#include<stdio.h>
int main()
{
    int operand1, operand2;
    char operator;
    printf("Enter two numbers : ");
    scanf("%d %d", &operand1, &operand2);
    printf("Enter operator to be used for the provided operands\n+ for addition \n- for subraction \n* for multiplication \n/ for division \nEnter choice : ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        printf("Sum is : %d\n", operand1+operand2);
        break;
    case '-':
        printf("Difference is %d\n", operand1-operand2);
        break;
    case '*':
        printf("Product is %d\n", operand1*operand2);
        break;
    case '/':
        printf("Quotient is f\n", (float)operand1/operand2);
        break;
    default:
        break;
    }
    return 0;
}
