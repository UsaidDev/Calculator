#include <stdio.h>

void addition(int num1, int num2){
    printf("Answer is:%d", num1+num2);
}
void subtraction(int num1,int num2){
    printf("Answer is:%d",num1-num2);
}
void Multiplication(int num1,int num2){
    printf("Answer is:%d",num1*num2);
}
void division(int num1,int num2){
    printf("Answer is:%d",num1/num2);
}
int main(){
    int num1, num2;
    char choice;
    printf("Welcome to Smart Calculator!\n");
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator(+,-,*,/):");
    scanf(" %c", &choice); 
    printf("%c\n", choice);

    if (choice == '+') {
        addition(num1,num2);
    } else if (choice == '-') {
        subtraction(num1,num2);
    } else if (choice == '*') {
        Multiplication(num1,num2);
    } else if (choice == '/') {
        if (num2 != 0) {
            division(num1,num2);
        } else {
            printf("Error: Division by zero!\n");
        }
    } else {
        printf("Invalid operator.\n");
    }
    printf("\nProgram finished!!");
    return 0;
}