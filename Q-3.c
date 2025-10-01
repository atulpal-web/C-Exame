#include <stdio.h>
int printReverseSum(int arr[], int size) {
    int sum = 0;
    printf("Array in reverse order\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\n");
    return sum;
}

int main() {
    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = printReverseSum(arr, n);
    printf("Sum of array elements: %d\n", total);

    return 0;
}
