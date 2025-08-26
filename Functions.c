[1] Function with No Parameters and No Return
#include <stdio.h>

void greet() {
    printf("Hello! Welcome to C programming.\n");
}

int main() {
    greet();  // Function call
    return 0;
}

[2] Function with Parameters but No Return
#include <stdio.h>

void printSum(int a, int b) {
    int sum = a + b;
    printf("Sum = %d\n", sum);
}

int main() {
    printSum(10, 20);
    return 0;
}

[3] Function with Return but No Parameters 
#include <stdio.h>

int getNumber() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int value = getNumber();
    printf("You entered: %d\n", value);
    return 0;
}
