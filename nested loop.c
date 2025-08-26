[1]Right-Aligned Triangle
#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (int star = 1; star <= i; star++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

[2] Pyramid Pattern
#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
