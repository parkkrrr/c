#include <stdio.h>

void arrReverse(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int n = sizeof(arr) / sizeof(int);
    arrReverse(arr, n);

    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    return 0;
}

void arrReverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secondval = arr[n - i - 1];

        arr[i] = secondval;
        arr[n - i - 1] = firstval;
    }

}