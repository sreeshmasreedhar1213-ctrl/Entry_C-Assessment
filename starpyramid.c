#include <stdio.h>

int main()
{
    int n, i, j;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for each row
    for(i = 1; i <= n; i++)
    {
        // Print stars in each row
        // Number of stars = (2 * i - 1)
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}