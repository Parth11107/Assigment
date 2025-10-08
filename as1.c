//Find the second largest element in an array
#include <stdio.h>
void main()
 {
   int arr[] = {10, 4, 8, 22, 15};
   int p,s;
  int i;
   int n = sizeof(arr) / sizeof(arr[0]);

    int first = p, second = s;

    for ( i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == s)
        printf("No second largest element.\n");
    else
        printf("Second largest = %d\n", second);

}

