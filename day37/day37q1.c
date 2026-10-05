//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main()
{
   int a[10][10], sum[10];
   int n, m, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum[i] = 0;

        for(j = 0; j < m; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", sum[i]);
         }

    return 0;
} 
