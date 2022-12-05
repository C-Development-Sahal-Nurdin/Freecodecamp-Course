#include <stdio.h>
#include <stdlib.h>

int main()
{
    // BUILDING A BETTER CALCULATOR
    double num1;
    double num2;
    char op;
    // INPUT
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter first number: ");
    scanf("%lf", &num1);
     printf("Enter an operator: ");
    scanf(" %c", &op);

    // LOGIC
    if (op == '+') {
        printf("Answer: %f", num1 + num2);
    } else if (op == '-'){
         printf("Answer: %f", num1 - num2);
    } else if (op == '*'){
         printf("Answer: %f", num1 * num2);
    } else if (op == '/'){
         printf("Answer: %f", num1 / num2);
    } else {
        printf("Wrong operatior!!!");
    }
    return 0;
}
