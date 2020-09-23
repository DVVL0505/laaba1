#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001");
    system("cls");
    int n, i, j, m;
    int day, month, d2;
    day = 1;
    month = 1;
    printf("Введите год\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (i % 4 == 0)
        {
            for (m = 1; m <= 12; m++)
            {
                if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month ==12)
                {
                    for (j = 1; j <= 31; j++)
                    {
                        day++;
                        if (day == 8)
                        {
                            day = 1;
                        }
                    }
                }
                else if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                    for (j = 1; j <= 30; j++)
                    {
                        day++;
                        if (day == 8)
                        {
                            day = 1;
                        }
                    }
                }
                else if (month == 2)
                {
                    for (j = 1; j <= 29; j++)
                    {
                        day++;
                        if (day == 8)
                        {
                            day = 1;
                        }
                    }
                }
                month++;
                if (month == 13)
                {
                    month = 1;
                }
            }
        }
        else
        {
            if (i % 4 != 0)
            {
                for (m = 1; m <= 12; m++)
                {
                    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month ==12)
                    {
                        for (j = 1; j <= 31; j++)
                        {
                            day++;
                            if (day == 8)
                            {
                                day = 1;
                            }
                        }
                    }
                    else if (month == 4 || month == 6 || month == 9 || month == 11)
                    {
                        for (j = 1; j <= 30; j++)
                        {
                            day++;
                            if (day == 8)
                            {
                                day = 1;
                            }
                        }
                    }
                    else if (month == 2)
                    {
                        for (j = 1; j <= 28; j++)
                        {
                            day++;
                            if (day == 8)
                            {
                                day = 1;
                            }
                        }
                    }
                    month++;
                    if (month == 13)
                    {
                        month = 1;
                    }
                }
            }
        }
    }
    if (n % 4 == 0)
    {
        for (j = 1; j < 275; j++)
        {
            day++;
            if (day == 8)
            {
                day = 1;
            }
        }
        d2 = 1;
        for (j = 0; day != 7; j++)
        {
            d2++;
            day++;
        }
        printf("Первое воскресенье октября в %d году это %d число", n, d2 + 1);
    }
    else if (n % 4 != 0)
    {
        for (j = 1; j < 274; j++)
        {
            day++;
            if (day == 8)
            {
                day = 1;
            }
        }
        d2 = 1;
        for (j = 0; day != 7; j++)
        {
            d2++;
            day++;
        }
        printf("Первое воскресенье октября в %d году это %d число", n, d2 + 1);
    }
    return 0;
}
