#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float avg_marks;
};

int main() {
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n], temp;

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Average marks: ");
        scanf("%f", &s[i].avg_marks);
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j].avg_marks < s[j + 1].avg_marks) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\nStudents sorted in descending order of average marks:\n");
    for (i = 0; i < n; i++) {
        printf("\nRoll: %d\nName: %s\nAge: %d\nAverage Marks: %.2f\n",
               s[i].roll, s[i].name, s[i].age, s[i].avg_marks);
    }

    return 0;  
}
