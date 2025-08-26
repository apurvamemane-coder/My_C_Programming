[1] Function with Arguments (No Return Value)
#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    greet("Alice");
    greet("Bob");
    return 0;
}

[2] Function with Arguments and Return Value
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 10);
    printf("Sum: %d\n", result);
    return 0;
}


[3] Using Pointers as Function Arguments (Swap Example)
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 3, b = 7;
    printf("Before: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After: a = %d, b = %d\n", a, b);
    return 0;
}
