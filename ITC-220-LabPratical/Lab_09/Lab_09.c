#include <stdio.h>

int main() {
    int size = 7;
    int hashTable[7];
    int i, key, n, hash, j;

        for (i = 0; i < size; i++)
        hashTable[i] = -1;

    printf("Enter number of keys to insert: ");
    scanf("%d", &n);

    printf("Enter %d keys:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &key);
        hash = key % size;

       
        j = hash;
        while (hashTable[j] != -1) {
            j = (j + 1) % size;
        }

        hashTable[j] = key;
    }

 
    printf("\nFinal Hash Table (Closed Hashing):\n");
    for (i = 0; i < size; i++) {
        if (hashTable[i] == -1)
            printf("Slot %d --> Empty\n", i);
        else
            printf("Slot %d --> %d\n", i, hashTable[i]);
    }

    return 0;
}