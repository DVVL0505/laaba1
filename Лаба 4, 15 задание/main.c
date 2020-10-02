#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("chcp 65001");
    system("cls");
    int a[10] = {3, 5, 8, 2, 4, 1, 9, 5, 6, 9}, i, k = 0, b[10];
    b[0] = 0;
    for (i = 0; i < 10; i++)
    {
        b[i] = 0;
    }
    for (i = 1; i < 10; i++)
    {
        if (a[i] > a[i - 1])
        {
            b[i] = 1;
        }
        else
        {
            b[i] = 0;
        }
    }
    for (i = 1; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 1; i < 10; i++)
    {
        if (b[i] == 1 && b[i - 1] == 0)
        {
            k++;
        }
    }
    printf("\n%d", k);
    return 0;
}
