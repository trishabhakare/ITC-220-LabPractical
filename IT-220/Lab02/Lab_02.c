#include <stdio.h>
#define MAX 10    

int top = -1;
int S[MAX];

void push();
void pop();
void palindrome();
void overunderflow();
void display();

int main() {
    int ch;

    while (1) {   /* LOOP MENU */

        printf("\nEnter Choice:\n");
        printf("1 - push element\n");
        printf("2 - pop element\n");
        printf("3 - check palindrome\n");
        printf("4 - check underflow and overflow condition\n");
        printf("5 - display stack\n");
        printf("6 - Exit\n");

        scanf("%d", &ch);

        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: palindrome(); break;
            case 4: overunderflow(); break;
            case 5: display(); break;
            case 6: 
                printf("Exiting program...\n");
                return 0;
            default: 
                printf("Invalid choice\n");
        }
    }
}

void push() {
    int ele;
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter element: ");
        scanf("%d", &ele);
        top = top + 1;
        S[top] = ele;
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", S[top]);
        top = top - 1;
    }
}

void palindrome() {
    int i;

    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    for (i = 0; i <= top / 2; i++) {
        if (S[i] != S[top - i]) {
            printf("Stack is Not Palindrome\n");
            return;
        }
    }

    printf("Stack is Palindrome\n");
}

void overunderflow() {
    if (top == -1)
        printf("Stack is Underflow (Empty)\n");
    else if (top == MAX - 1)
        printf("Stack is Overflow (Full)\n");
    else
        printf("Stack is neither Overflow nor Underflow\n");
}

void display() {
    int i;

    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");
    for (i = 0; i <= top; i++) {
        printf("%d ", S[i]);
    }
    printf("\n");
}

