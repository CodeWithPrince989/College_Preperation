#include <stdio.h>

int main() {
    int n;
    
    // 1. Get the size of the array
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1; // Basic safety check for valid size
    }
    
    int arr[n];
    
    // 2. Populate the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 3. Correctly print the elements using a loop and format specifier
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
