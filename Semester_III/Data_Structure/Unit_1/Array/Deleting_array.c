#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int delete_index = 2; // We want to delete '30' (index 2)

    // Check if the index is valid
    if (delete_index < 0 || delete_index >= size) {
        printf("Invalid index!\n");
        return 1;
    }

    // Shift elements to the left to overwrite the target index
    for (int i = delete_index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the tracking size of the array
    size--;

    // Print the updated array
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    // Output: 10 20 40 50
    
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dynamically allocate an array for 5 integers
    int *arr = (int *)malloc(5 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Use the array normally
    arr[0] = 10;

    // "Delete" the entire array from heap memory
    free(arr);

    // Good practice: Set the pointer to NULL to avoid a dangling pointer
    arr = NULL; 

    return 0;
}
