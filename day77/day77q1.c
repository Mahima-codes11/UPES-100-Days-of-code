//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp, *op;
    char ch;

    fp = fopen("input.txt", "r");
    op = fopen("output.txt", "w");

    if (fp == NULL || op == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, op);
    }

    fclose(fp);
    fclose(op);

    printf("File converted successfully.");

    return 0;
}
