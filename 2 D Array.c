[1] 2 D Array (Matrix)
#include <stdio.h>

int main() {
    int arr[3][3], i, j;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

[2] Sum of All Elements in a 2 D Array
#include <stdio.h>

int main() {
    int arr[2][3], i, j, sum = 0;

    printf("Enter elements of 2x3 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
