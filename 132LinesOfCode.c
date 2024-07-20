#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Global declarations for variables
char operation, yes_no;
int num;
float answer;
float operands[10];

// Function prototypes
float performOperation(char op);
void Ask_user();
void resume();

// Function to perform the selected operation
float performOperation(char op) {
    float result = 0;
    int i;

    switch (op) {
        case 'A': // Addition
            result = 0;
            printf("\nHow many operands (maximum 10) would you like to add? ");
            scanf("%d", &num);
            if (num < 2 || num > 10) {
                printf("Invalid number of operands. Please enter a number between 2 and 10.\n");
                return 0;
            }
            printf("\nEnter values for %d operands: ", num);
            for (i = 0; i < num; i++) {
                scanf("%f", &operands[i]);
                result += operands[i];
            }
            break;

        case 'S': // Subtraction
            printf("\nHow many operands (maximum 10) would you like to subtract? ");
            scanf("%d", &num);
            if (num < 2 || num > 10) {
                printf("Invalid number of operands. Please enter a number between 2 and 10.\n");
                return 0;
            }
            printf("\nEnter values for %d operands: ", num);
            scanf("%f", &result); // Initialize result with the first operand
            for (i = 1; i < num; i++) {
                scanf("%f", &operands[i]);
                result -= operands[i];
            }
            break;

        case 'M': // Multiplication
            result = 1;
            printf("\nHow many operands (maximum 10) would you like to multiply? ");
            scanf("%d", &num);
            if (num < 2 || num > 10) {
                printf("Invalid number of operands. Please enter a number between 2 and 10.\n");
                return 0;
            }
            printf("\nEnter values for %d operands: ", num);
            for (i = 0; i < num; i++) {
                scanf("%f", &operands[i]);
                result *= operands[i];
            }
            break;

        case 'D': // Division
            printf("\nHow many operands (maximum 10) would you like to divide? ");
            scanf("%d", &num);
            if (num < 2 || num > 10) {
                printf("Invalid number of operands. Please enter a number between 2 and 10.\n");
                return 0;
            }
            printf("\nEnter values for %d operands: ", num);
            scanf("%f", &result); // Initialize result with the first operand
            for (i = 1; i < num; i++) {
                scanf("%f", &operands[i]);
                if (operands[i] == 0) {
                    printf("Division by zero is not allowed.\n");
                    return 0;
                }
                result /= operands[i];
            }
            break;

        default:
            printf("Invalid operation.\n");
            break;
    }

    return result;
}

// Function to ask the user which operation they want to perform
void Ask_user() {
    printf("\nSelect the operation you want to perform: \n");
    printf("A. Addition\n");
    printf("S. Subtraction\n");
    printf("M. Multiplication\n");
    printf("D. Division\n");
    printf("Q. Quit\n");
    printf("Enter your choice: ");
    operation = getche();
    printf("\n");
}

// Function to resume or exit the calculator program
void resume() {
    printf("\nWould you like to perform another calculation? (Y/N): ");
    yes_no = getche();
    printf("\n");
}

int main() {
    do {
        Ask_user();

        if (operation == 'Q' || operation == 'q') {
            printf("Thank you for using the calculator. Goodbye!\n");
            return 0;
        }

        answer = performOperation(operation);
        if (operation == 'A' || operation == 'S' || operation == 'M' || operation == 'D') {
            printf("The result of the operation is: %.2f\n", answer);
        }

        resume();
    } while (yes_no == 'Y' || yes_no == 'y');

    return 0;
}
