#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[] = "Hello";
    char str2[] = "World!!!";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("Length of str1: %d\n", len1);
    printf("Length of str2: %d\n", len2);

    if (len1 > len2) {
        printf("str1 is longer than str2.\n");
    } else if (len1 < len2) {
        printf("str2 is longer than str1.\n");
    } else {
        printf("Both strings are of equal length.\n");
    }

    return 0;
}

