#include <stdio.h>

int main(){
    char operator;
    double num1,num2,result;

    printf("Enter an operator (+,-,*,/) : ");
    scanf("%c",&operator);

    printf("\nEnter a number 1: ");
    scanf("%lf",&num1);

    printf("\nEnter a number 2: ");
    scanf("%lf",&num2);

    switch (operator){
        case '+':
            result = num1 + num2;
            printf("\nAddition result is: %lf",result);
            break;
        case '-':
            result = num1 -num2;
            printf("\nSubstraction result is: %lf",result);
            break;
        case '*':
            result = num1*num2;
            printf("\nMultiplication product is: %lf",result);
            break;
        case '/':
            if(num2 == 0){
                printf("\nDivision by zero is not allowed.");
            }
            else{
            result = num1/num2;
            printf("\nDivision result is: %.2lf",result);
            }
            break;
        default:
            printf("%c is not a valid operator.",operator);
    }

    return 0;
}