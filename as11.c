//Print first N multiples of a number
#include <stdio.h>
int main() {
    int num, N;
int i;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter how many multiples to print: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("%d ", num * i);
    }

    printf("\n");
    return 0;
}


