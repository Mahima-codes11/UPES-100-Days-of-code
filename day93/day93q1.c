//Find and print the student with the highest marks.
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
    int i, max = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter name: ");
        scanf("%19s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < 5; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    printf("\nHighest Marks Student");
    printf("\nName: %s", s[max].name);
    printf("\nRoll No: %d", s[max].roll_no);
    printf("\nMarks: %.2f", s[max].marks);

    return 0;
}
