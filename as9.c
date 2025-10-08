//Insert an element at a specific position in an array
#include <stdio.h>

int main() 
{
    int arr[10] = {1, 2, 3, 5, 6};  
    int size = 5;                   
    int element = 4;                
    int position = 3;              

   
    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[position - 1] = element;
    size++;

  
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

