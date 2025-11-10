#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

int main() {
    int data, count = 0;
    struct node *newnode, *temp;

    while (1) {
        printf("Enter any value (0 to stop): ");
        scanf("%d", &data);

        if (data == 0) {
            break;
        }

        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        newnode->data = data;
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        count++;
    }

    printf("\nLinked list: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    printf("Number of elements: %d\n", count);

    return 0;
}