#include <stdio.h>

int binarySearch(int arr[], int search, int low, int high);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 88, 89, 98, 99, 103, 106, 109};

    int result = binarySearch(arr, 5636, 0, (sizeof(arr)/sizeof(int))-1);
    (result == -1) ? printf("Element Not Found!") : printf("Element Found at index : %d", result);

    return 0;
}

int binarySearch(int arr[], int search, int low, int high)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;

        if (mid[arr] == search)
            return mid;

        if (mid[arr] > search)
            return binarySearch(arr, search, low, mid - 1);

        return binarySearch(arr, search, mid + 1, high);
    }
    return -1;
}