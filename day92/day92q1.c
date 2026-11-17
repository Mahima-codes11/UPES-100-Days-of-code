#include <stdio.h>

struct Student
{
    char name[20];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter name: ");
        scanf("%19s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nName: %s", s[i].name);
        printf("\nRoll No: %d", s[i].roll_no);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
