Syntax:
do {
    // code block to execute
} while (condition);

[1] Count from 1 to 5
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}

[2] Where Condition Is Initially False
#include <stdio.h>

int main() {
    int x = 10;

    do {
        printf("This will print once, even though x > 5\n");
    } while (x < 5);

    return 0;
}

[3] Menu-Driven Program
#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Say Hello\n");
        printf("2. Say Bye\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Hello!\n");
                break;
            case 2:
                printf("Bye!\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}




