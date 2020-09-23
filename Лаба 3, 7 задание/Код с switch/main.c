#include <stdio.h>
#include <stdlib.h>

int d31(int day)
{
    for (int j = 1; j <= 31; j++)
    {
        day++;
        if (day == 8)
        {
            day = 1;
        }
    }
    return day;
}

int d30(int day)
{
    for (int j = 1; j <= 30; j++)
    {
        day++;
        if (day == 8)
        {
            day = 1;
        }
    }
    return day;
}

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
                switch (month)
                {
                case 1:
                {
                    day = d31(day);
                    break;
                }
                case 2:
                {
                    for (j = 1; j <= 29; j++)
                    {
                        day++;
                        if (day == 8)
                        {
                            day = 1;
                        }
                    }
                    break;
                }
                case 3:
                {
                    day = d31(day);
                    break;
                }
                case 5:
                {
                    day = d31(day);
                    break;
                }
                case 7:
                {
                    day = d31(day);
                    break;
                }
                case 8:
                {
                    day = d31(day);
                    break;
                }
                case 10:
                {
                    day = d31(day);
                    break;
                }
                case 12:
                {
                    day = d31(day);
                    break;
                }
                case 4:
                {
                    day = d30(day);
                    break;
                }
                case 6:
                {
                    day = d30(day);
                    break;
                }
                case 9:
                {
                    day = d30(day);
                    break;
                }
                case 11:
                {
                    day = d30(day);
                    break;
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
                    switch (month)
                    {
                    case 1:
                    {
                        day = d31(day);
                        break;
                    }
                    case 2:
                    {
                        for (j = 1; j <= 28; j++)
                        {
                            day++;
                            if (day == 8)
                            {
                                day = 1;
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        day = d31(day);
                        break;
                    }
                    case 5:
                    {
                        day = d31(day);
                        break;
                    }
                    case 7:
                    {
                        day = d31(day);
                        break;
                    }
                    case 8:
                    {
                        day = d31(day);
                        break;
                    }
                    case 10:
                    {
                        day = d31(day);
                        break;
                    }
                    case 12:
                    {
                        day = d31(day);
                        break;
                    }
                    case 4:
                    {
                        day = d30(day);
                        break;
                    }
                    case 6:
                    {
                        day = d30(day);
                        break;
                    }
                    case 9:
                    {
                        day = d30(day);
                        break;
                    }
                    case 11:
                    {
                        day = d30(day);
                        break;
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
