#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k, choice;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    do {
        printf("\n--- MATRIX CALCULATOR ---\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (r1 == r2 && c1 == c2) {
                    printf("\nResult of Addition:\n");
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c1; j++) {
                            c[i][j] = a[i][j] + b[i][j];
                            printf("%d ", c[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Addition not possible.\n");
                }
                break;

            case 2:
                if (r1 == r2 && c1 == c2) {
                    printf("\nResult of Subtraction:\n");
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c1; j++) {
                            c[i][j] = a[i][j] - b[i][j];
                            printf("%d ", c[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Subtraction not possible.\n");
                }
                break;

            case 3:
                if (c1 == r2) {
                    printf("\nResult of Multiplication:\n");
                    for (i = 0; i < r1; i++) {
                        for (j = 0; j < c2; j++) {
                            c[i][j] = 0;
                            for (k = 0; k < c1; k++) {
                                c[i][j] += a[i][k] * b[k][j];
                            }
                            printf("%d ", c[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Multiplication not possible.\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}