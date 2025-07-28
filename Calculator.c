#include <stdio.h>
#include <stdlib.h>

void add(float a, float b) {
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
}

void subtract(float a, float b) {
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
}

void multiply(float a, float b) {
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
}

void divide(float a, float b) {
    if (b != 0)
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    else
        printf("Error: Division by zero is not allowed!\n");
}

int main() {
    int choice;
    float num1, num2;
    char continue_calc;

    do {
        // Display menu
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        // Validate choice
        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select a valid option.\n");
            continue;
        }

        // Get input numbers
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Perform selected operation
        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
        }

        // Ask to continue
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &continue_calc);
    } while (continue_calc == 'y' || continue_calc == 'Y');

    return 0;
}