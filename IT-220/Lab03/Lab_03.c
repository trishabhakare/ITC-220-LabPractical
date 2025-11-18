#include <stdio.h>
#define MAX 100

int q[MAX], r = -1, f = -1;

void enqueue(int ele) 
{
    if (r == MAX - 1) {
        printf("Queue is full\n");
    }
    else if (r == -1 && f == -1) {
        r = 0;
        f = 0;
        q[r] = ele;
    }
    else {
        r = r + 1;
        q[r] = ele;
    }
}

void dequeue() 
{
    if (f == -1 && r == -1) {
        printf("Queue is empty\n");
    }
    else if (f == r) {
        printf("Deleted element = %d\n", q[f]);
        f = -1;
        r = -1;
    }
    else {
        printf("Deleted element = %d\n", q[f]);
        f = f + 1;
    }
}

void display() 
{
    int i;

    if (f == -1 && r == -1) {
        printf("Queue is empty\n");
    }
    else {
        printf("Queue elements: ");
        for (i = f; i <= r; i++) {
            printf("%d ", q[i]);
        }
        printf("\n");
    }
}

int main() 
{
    int ch, ele;

    while (1) {
        printf("\nEnter 1 to Enqueue\n");
        printf("Enter 2 for Dequeue\n");
        printf("Enter 3 for Display\n");
        printf("Enter 4 to Exit\n");
        scanf("%d", &ch);

        switch (ch) {

            case 1:
                printf("Enter the element: ");
                scanf("%d", &ele);
                enqueue(ele);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}

