[1] Linear Search in Integer Array
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key = 30;
    int found = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element not found\n");

    return 0;
}

[2] Linear Search Using Function
#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;  // return index
    }
    return -1;
}

int main() {
    int arr[] = {5, 15, 25, 35, 45};
    int key = 25;
    int index = linearSearch(arr, 5, key);

    if(index != -1)
        printf("Found at index %d\n", index);
    else
        printf("Not found\n");

    return 0;
}
