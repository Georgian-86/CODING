#include <stdio.h>
#include <string.h>

int isPalindrome(char *str) {
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i]!= str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[] = "racecar";
    char str2[] = "hello";

    if (isPalindrome(str1)) {
        printf("%s is a palindrome\n", str1);
    } else {
        printf("%s is not a palindrome\n", str1);
    }

    if (isPalindrome(str2)) {
        printf("%s is a palindrome\n", str2);
    } else {
        printf("%s is not a palindrome\n", str2);
    }

    return 0;
}

