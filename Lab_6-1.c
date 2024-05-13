#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    const int n = 4;
    int A[n][n];
    int B[n][n];
    do
    {
        printf("\n1. Задати значення матриці");
        printf("\n2. Завдання №1");
        printf("\n0. Вихід з програми\n");
        printf("\nВведіть номер (0-2): ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Матриця A\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d", &A[i][j]);
                }
            }

            printf("Матриця B\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    scanf("%d", &B[i][j]);
                }
            }
            printf("Матриця A\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d\t", A[i][j]);
                }
                printf("\n");
            }
            printf("Матриця B\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d\t", B[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Матриця A\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j % 2 == 0)
                    {
                        A[i][j + 1] = B[j][i];
                    }
                    printf("%d \t", A[i][j]);
                }
                printf("\n");
            }
            break;
        case 0:
            printf("Вихід з програми");
            break;
        default:
            printf("Неправильна цифра");
            break;
        }
    } while (c != 0);

    return 0;
}
