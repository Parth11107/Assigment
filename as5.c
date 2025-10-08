//Calculate the circumference of a circle
#include <stdio.h>
int main() 
{
    float radius = 5.0;
    float circumference;

    circumference = 2 * 3.14 * radius;

    printf("The circumference of the circle with radius %.2f is %.2f\n", radius, circumference);

    return 0;
}

