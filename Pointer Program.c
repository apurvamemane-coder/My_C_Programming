[1] Basic Pointer Example
#include <stdio.h>

int main() {
    int a = 10;
    int *p;        // Pointer declaration

    p = &a;        // Store address of a in pointer p

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of p (address stored): %p\n", p);
    printf("Value at address p (value of a): %d\n", *p); // Dereferencing

    return 0;
}

[2] Pointer for Swapping Two Numbers
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);  // Passing addresses
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
 
[3] Pointer to Pointer
#include <stdio.h>

int main() {
    int x = 100;
    int *p = &x;
    int **pp = &p;

    printf("Value of x: %d\n", x);
    printf("Value via *p: %d\n", *p);
    printf("Value via **pp: %d\n", **pp);

    return 0;
}
