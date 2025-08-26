[1] String Length 
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    int length = strlen(str);

    printf("Length = %d\n", length);

    return 0;
}

[2]String Comparison
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "Hello";

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are different.\n");

    return 0;
}

[3] String Comparison
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "Hello";

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are different.\n");

    return 0;
}
