[1] multidimensional array
#include <stdio.h>

int main() {
    int arr[2][2][3]; // 2 blocks, 2 rows, 3 columns
    int i, j, k;

    printf("Enter elements of 3D array [2][2][3]:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 3; k++) {
                printf("arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("You entered:\n");
    for(i = 0; i < 2; i++) {
        printf("Block %d:\n", i);
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 3; k++) {
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}


[2]
#include <stdio.h>

int main() {
    int arr[2][2][2] = {
        { {1, 2}, {3, 4} },
        { {5, 6}, {7, 8} }
    };

    int i, j, k;

    printf("3D array values:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;
}
