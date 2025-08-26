Syntax:
switch(expression) {
    case constant1:
        // code
        break;
    case constant2:
        // code
        break;
    // more cases
    default:
        // code if none of the above matches
}

[1]
#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Addition.\n");
            break;
        case 2:
            printf("You chose Subtraction.\n");
            break;
        case 3:
            printf("You chose Multiplication.\n");
            break;
        case 4:
            printf("You chose Division.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

[2] Day of the Week
#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number.\n");
    }

    return 0;
}


[3] Simple Calculator Using Switch
#include <stdio.h>

int main() {
    char op;
    float num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
