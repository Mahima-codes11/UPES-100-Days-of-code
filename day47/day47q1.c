//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int i, j, found;
    printf("Enter first string: ");
    scanf("%s",a);
    printf("Enter second string: ");
    scanf("%s",b);
    if (strlen(a) != strlen(b))
    {
        printf("Not Anagram");
        return 0;
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        found = 0;
        for (j = 0; b[j] != '\0'; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
                b[j] = '#';
                break;
            }
        }
        if (found == 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}
