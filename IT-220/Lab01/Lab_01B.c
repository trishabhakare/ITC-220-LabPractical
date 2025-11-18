#include <stdio.h>

int search(int arr[], int size, int target);

int main()
{
    int s, i;

    printf("Enter size of array: ");
    scanf("%d", &s);

    if (s <= 0)
    {
        printf("Invalid or empty array\n");
        return 0;
    }

    int arr[100];   

    printf("Enter %d elements in array:\n", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int n;
    printf("Enter search value: ");
    scanf("%d", &n);

    int result = search(arr, s, n);

    if (result != -1)
        printf("%d is found in array at index %d\n", n, result);
    else
        printf("%d is not found in array\n", n);

    return 0;
}

int search(int arr[], int size, int target)
{
    int beg = 0;
    int end = size - 1;

    while (beg <= end)
    {
        int mid = (beg + end) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            beg = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

  
    
