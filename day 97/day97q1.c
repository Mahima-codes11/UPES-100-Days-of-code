//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Employee
{
    int id;
    char name[50];
    struct Date joining_date;
    struct Date birth_date;
};

int main()
{
    struct Employee e;

    printf("Enter employee id: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining_date.day,
                       &e.joining_date.month,
                       &e.joining_date.year);

    printf("Enter birth date (dd mm yyyy): ");
    scanf("%d %d %d", &e.birth_date.day,
                       &e.birth_date.month,
                       &e.birth_date.year);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);

    printf("Joining Date: %d/%d/%d\n",
           e.joining_date.day,
           e.joining_date.month,
           e.joining_date.year);

    printf("Birth Date: %d/%d/%d\n",
           e.birth_date.day,
           e.birth_date.month,
           e.birth_date.year);

    return 0;
}
