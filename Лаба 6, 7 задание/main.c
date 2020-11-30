#include <stdio.h>
#include <stdlib.h>

int module(int x);

int main()
{
    system("chcp 65001");
    system("cls");
    int **mas1;
    int **mas2;
    int i, j, n, max, i_max, j_max, n2, m, k;
    printf("Введите порядок матрицы\n");
    scanf("%d", &n);
    mas1 = (int**) calloc (n, sizeof (int *));
    for(int i = 0; i < n; i++)
    mas1[i] = (int*) calloc (n, sizeof (int));
    printf("Введите элементы матрицы\n");
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", *(mas1+i)+j);
        }
    }
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mas1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    max = module(mas1[0][0]);
    i_max = 0;
    j_max = 0;
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (max < module(mas1[i][j]))
            {
                max = module(mas1[i][j]);
                i_max = i;
                j_max = j;
            }
        }
    }
    printf("Максимальное по модулю число %d, оно находится на координатах %d %d\n\n", max, j_max, i_max);
    n2 = n - 1;
    mas2 = (int**) calloc (n2, sizeof (int *));
    for(int i = 0; i < n2; i++)
    mas2[i ]= (int*) calloc (n2, sizeof (int));
    for (i = 0, m = 0; m < n2; i++, m++)
    {
        if (i == i_max)
        {
            i++;
        }
        for (j = 0, k = 0; k < n2; j++, k++)
        {
            if (j == j_max)
            {
                j++;
            }
            mas2[m][k] = mas1[i][j];
        }
    }
    for(m = 0; m < n2; m++)
    {
        for (k = 0; k < n2; k++)
        {
            printf("%d\t", mas2[m][k]);
        }
        printf("\n");
    }
    free(mas1);
    free(mas2);
    return 0;
}

int module(int x)
{
    if (x < 0)
    {
        x *= -1;
    }
    return x;
}
