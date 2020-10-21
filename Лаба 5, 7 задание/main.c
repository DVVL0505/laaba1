#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001");
    system("cls");
    int i, j, a[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            a[i][j] = 1 + rand() % 51;
        }
    }
    a[4][0] = 28;
    int max = a[0][0];
    for (i = 1; i < 5; i++)
    {
        if (max < a[i][i])
        {
            max = a[i][i];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("%d\n", max);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i > j)
            {
                if (max  == a[i][j])
                {
                    printf("Координаты этого числа x=%d, y=%d", i+1, j+1);
                    return 0;
                }
            }
        }
    }
    printf("Такого числа нету");
    return 0;
}
