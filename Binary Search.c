[1] Basic Binary Search on Sorted Integer Array
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6, key = 40;
    int low = 0, high = n - 1, mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            return 0;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}

[2] Binary Search in Descending Order Array
#include <stdio.h>

int main() {
    int arr[] = {100, 80, 60, 40, 20, 10};
    int n = 6, key = 60;
    int low = 0, high = n - 1, mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            return 0;
        } else if(arr[mid] > key) {
            low = mid + 1;  // reverse logic for descending
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}
