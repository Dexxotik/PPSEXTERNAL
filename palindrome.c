#include <stdio.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Finding the length of the string
    for (i = 0; str[i] != '\0'; i++);

    // Comparing characters from beginning and end of the string
    for (j = 0; j < i / 2; j++) {
        if (str[j] != str[i - j - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
