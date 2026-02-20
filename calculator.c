#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting calculator...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 4:
                result = divide(num1, num2);
                if (num2 != 0)
                    printf("Result = %.2f\n", result);
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Function definitions

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}