#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) 
        return mid;
        if (arr[mid] < target) low = mid + 1;
        else 
        high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[]={12,334,344,5667,3344};
    int target;
    printf("Enter target: ");
    scanf("%d ", &target);
    printf("Linear: %d\n", linearSearch(arr, target));
    printf("Binary: %d\n", binarySearch(arr, target));
    return 0;
}
