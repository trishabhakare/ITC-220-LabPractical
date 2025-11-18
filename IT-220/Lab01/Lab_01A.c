#include <stdio.h>

int main() {
    int a, i;
    int even_index_sum = 0, odd_index_sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &a);

    int arr[a];

    printf("Enter %d elements:\n", a);
    for (i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < a; i++) {
        if (i % 2 == 0) {
            even_index_sum += arr[i];
        } else {
            odd_index_sum += arr[i];
        }
    }

    printf("Sum of even index elements: %d\n", even_index_sum);
    printf("Sum of odd index elements: %d\n", odd_index_sum);

    return 0;
}

