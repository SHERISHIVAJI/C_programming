#include<stdio.h>
int binarySerach(int arr[], int left, int right, int target) {
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return binarySerach(arr, left, mid - 1, target);
    else
        return binarySerach(arr, mid + 1, right, target);
}

int main() {
    int arr[] = {1,3,5,7,9,11,13,15,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 15;

    int result = binarySerach(arr, 0, n - 1, target);

    if(result != -1)
        printf("Element %d found at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);
}