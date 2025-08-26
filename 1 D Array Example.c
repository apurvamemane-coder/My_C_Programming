[1] 1 D Array Example
#include <stdio.h>

int main() {
    int arr[100];   // Declare a 1D array of size 100
    int n, i, sum = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array and calculate sum
    printf("\nYou entered:\n");
    for(i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
        sum += arr[i];
    }

    printf("\nSum of the array elements = %d\n", sum);

    return 0;
}

[2] 
#include <stdio.h>

int main() {
    int arr[5], i;
    
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
