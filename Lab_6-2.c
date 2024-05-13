#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double min;
    int n, e, a, mgen = 0;
    do
    {
        printf("Введіть розмір матриці\n");
        printf("e = ");
        scanf("%d", &e);
        printf("n = ");
        scanf("%d", &n);
        if (n == e)
        {
            printf("Введіть розмір прямокутної маатриці\n");
        }

    } while (n == e);

    double b[e][n];
    double array_min[e];
    do
    {
        
        
            printf("\n1. Згенерувати матрицю");
            printf("\n2. Завдання №1");
            printf("\n0. Вихід з програми\n");
            printf("\nВведіть номер (0-2): ");
            scanf("%d", &a);
        

        switch (a)
        {

        case 1:
            srand(time(0));
            printf("Масив випадкових чисел:\n");
            for (int i = 0; i < e; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    b[i][j] = rand() % 201 - 100;
                    printf("%.2f \t", b[i][j]);
                }
                printf("\n");
            }
            mgen = 1;
            break;
        case 2:
        if (mgen == 0)
        {
            printf("Спочатку згенеруйте матрицю");
        } else if (mgen == 1)
        {
            min = b[0][0];
            for (int i = 0; i < e; i++)
            {
                for (int j = 0; j < n; j++)
                {

                    if (b[i][j] < min)
                    {
                        min = b[i][j];
                    }
                }
                array_min[i] = min;
                min = b[i + 1][0];
            }
            printf("Мiнiмальньнi елементи в кожному рядку прямокутної матрицi\n");
            for (int i = 0; i < e; i++)
            {
                printf(" %.2f ", array_min[i]);
            }
        }
        
            break;
        case 0:
            printf("Вихід з програми");
            break;
        default:
            printf("Неправильна цифра");
            break;
        }
    } while (a != 0);

    return 0;
}
