#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 18;
    int max, lcm;

    
    max = (num1 > num2) ? num1 : num2;

   
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

