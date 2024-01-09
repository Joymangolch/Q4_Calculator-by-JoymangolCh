#include <stdio.h>


void get_numbers(float *num1, float *num2);
char get_operator();
void perform_operation(float num1, float num2, char operator);
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    char operator;
    float num1, num2;

    while (1) { 
        get_numbers(&num1, &num2);
        operator = get_operator();
        perform_operation(num1, num2, operator);

        printf("\nDo you want to perform another calculation? (y/n): ");
        char choice;
        scanf(" %c", &choice);
        if (choice != 'y') {
            break;
        }
    }

    return 0;
}

// Get input for two numbers
void get_numbers(float *num1, float *num2) {
    printf("Enter two numbers: ");
    scanf("%f %f", num1, num2);
}

// Get input for the operator
char get_operator() {
    printf("Enter an operator (+, -, *, /): ");
    char operator;
    scanf(" %c", &operator);
    return operator;
}

// Perform the chosen operation
void perform_operation(float num1, float num2, char operator) {
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
            }
            break;

    
        default:
            printf("Invalid operator\n");
    }
}

// Functions for individual operations
float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}

