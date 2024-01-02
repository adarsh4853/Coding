#include <stdio.h>

int main() {
    int numRows;
    
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    for (int i = 0; i < numRows; i++) {
        int currentValue = 1;

        // Print leading spaces
        for (int j = 0; j < numRows - i - 1; j++) {
            printf("   ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%6d", currentValue);

            // Calculate the next value using the previous value
            currentValue = currentValue * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}

