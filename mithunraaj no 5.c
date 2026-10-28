
#include <stdio.h>
int main()
{
    int a[50], b[10][10];
    int n, rows, cols;
    int i, j, sum1 = 0, sum2 = 0;
    printf("Enter the number of elements 1D array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n1D array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        sum1 += a[i];
    }
    printf("\nSum of 1D array = %d\n", sum1);
    printf("\nEnter the number of rows in 2D array: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in 2D array: ");
    scanf("%d", &cols);
    printf("Enter the elements of 2D array:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n2D array Elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", b[i][j]);
            sum2 += b[i][j];
        }
        printf("\n");
    }
    printf("Sum of 2D array = %d\n", sum2);
    return 0;
}