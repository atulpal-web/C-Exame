#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 
    int *ptr = arr; 

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    for (i = 0; i < n; i++) {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)); 
    }

    printf("Cubed elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
