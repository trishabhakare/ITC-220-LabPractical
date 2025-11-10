#include <stdio.h>

int search(int arr[], int size, int target);

int main()
{
    int s;
    printf("Enter size of array: ");
    scanf("%d", &s);

    if (s <= 0)
    {
        printf("Invalid or empty array\n");
        return 0;
    }

    int arr[s];
    printf("Enter elements in array:\n");
    for (int i = 0; i < s; i++)
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
    if (arr == NULL || size == 0)
        return -1;

    int beg = 0;
    int end = size - 1;

    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        printf("Searching between [%d - %d]\n", beg, end);

        if (arr[mid] == target)
        {
            printf("Element found at index %d\n", mid);
            return mid;
        }
        else if (arr[mid] < target)
        {
            printf("Target value is greater than midpoint: %d\n", arr[mid]);
            beg = mid + 1;
        }
        else
        {
            printf("Target value is less than midpoint: %d\n", arr[mid]);
            end = mid - 1;
        }
    }

    return -1;
}
