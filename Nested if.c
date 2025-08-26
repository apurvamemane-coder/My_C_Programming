[1]Check if Number is Positive and Even
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0) {
            printf("The number is positive and even.\n");
        } else {
            printf("The number is positive but odd.\n");
        }
    } else {
        printf("The number is not positive.\n");
    }

    return 0;
}


[2]Check if a Year is a Leap Year (using nested if)
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}


[3]Check if Student Passed in All Subjects (3 subjects)
#include <stdio.h>

int main() {
    int math, science, english;

    printf("Enter marks for Math, Science, and English: ");
    scanf("%d %d %d", &math, &science, &english);

    if (math >= 40) {
        if (science >= 40) {
            if (english >= 40) {
                printf("Student passed all subjects.\n");
            } else {
                printf("Student failed in English.\n");
            }
        } else {
            printf("Student failed in Science.\n");
        }
    } else {
        printf("Student failed in Math.\n");
    }

    return 0;
}
