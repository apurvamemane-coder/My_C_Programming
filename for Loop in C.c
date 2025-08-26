[1]for Loop in C
Syntax:
for (initialization; condition; increment/decrement) {
    // code to execute
}

[2] Print numbers from 1 to 5
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}

[3] Print even numbers from 2 to 10
#include <stdio.h>

int main() {
    for (int i = 2; i <= 10; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

[4] Reverse loop (count from 5 to 1)
#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}

[5]Sum of first N numbers
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}