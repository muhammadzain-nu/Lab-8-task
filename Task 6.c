#include <stdio.h>

int main() {
    int arr[3][3];
    int isSaddle = 0, saddleFound = 0;
    int i, j, k;

    printf("Enter elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix entered:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        int rowMin = arr[i][0];
        int colIndex = 0;

        for (j = 1; j < 3; j++) {
            if (arr[i][j] < rowMin) {
                rowMin = arr[i][j];
                colIndex = j;
            }
        }

        isSaddle = 1;
        for (k = 0; k < 3; k++) {
            if (arr[k][colIndex] > rowMin) {
                isSaddle = 0;
                break;
            }
        }

        if (isSaddle) {
            printf("\nSaddle point found: %d at position [%d][%d]\n",
                   rowMin, i + 1, colIndex + 1);
            saddleFound = 1;
        }
    }

    if (!saddleFound)
        printf("\n❌ No saddle point found in the matrix.\n");

    return 0;
}
