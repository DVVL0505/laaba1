#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char *stroka;
    int n, i, check = 1, i_rem = 0, k = 0, j, g = 0, t;
    double number = 0, sum = 0;
    printf("Enter the number of characters\n");
    scanf("%d", &n);
    stroka = (char*) calloc (n, sizeof (char));
    printf("Enter string\n");
    fflush(stdin);
    gets(stroka);
    for (i = 0; stroka[i] != '\0'; i++)
    {
        if (stroka[i] == '1' || stroka[i] == '2' || stroka[i] == '3' || stroka[i] == '4' || stroka[i] == '5' || stroka[i] == '6' || stroka[i] == '7' || stroka[i] == '8' || stroka[i] == '9' || stroka[i] == '0')
            {
                if (stroka[i] == '1')
                {
                    number += 0.1;
                    number *= 10;
                }
                else if (stroka[i] == '2')
                {
                    number += 0.2;
                    number *= 10;
                }
                else if (stroka[i] == '3')
                {
                    number += 0.3;
                    number *= 10;
                }
                else if (stroka[i] == '4')
                {
                    number += 0.4;
                    number *= 10;
                }
                else if (stroka[i] == '5')
                {
                    number += 0.5;
                    number *= 10;
                }
                else if (stroka[i] == '6')
                {
                    number += 0.6;
                    number *= 10;
                }
                else if (stroka[i] == '7')
                {
                    number += 0.7;
                    number *= 10;
                }
                else if (stroka[i] == '8')
                {
                    number += 0.8;
                    number *= 10;
                }
                else if (stroka[i] == '9')
                {
                    number += 0.9;
                    number *= 10;
                }
                else if (stroka[i] == '0')
                {
                    number *= 10;
                }
            }
            else if (stroka[i] == ' ' || stroka[i] == '.' || stroka[i] == ',' || stroka[i] == '!' || stroka[i] == '?')
            {
                if (check == 1)
                {
                    sum += number;
                    for (j = 0; j < k; i_rem++, j++)
                    {
                        stroka[i_rem] = ' ';
                    }
                }
                number = 0;
                check = 1;
                k = 0;
                if (stroka[i + 1] == '1' || stroka[i + 1] == '2' || stroka[i + 1] == '3' || stroka[i + 1] == '4' || stroka[i + 1] == '5' || stroka[i + 1] == '6' || stroka[i + 1] == '7' || stroka[i + 1] == '8' || stroka[i + 1] == '9' || stroka[i + 1] == '0')
                    {
                        i_rem = i + 1;
                    }
            }
            else
            {
                number = 0;
                check = 0;
            }
        k++;
    }
    if (number != 0 && check == 1)
    {
        sum += number;
        stroka[i - 1] = ' ';
    }
    while(t > 0)
    {
        sum /= 10;
        t = sum;
        g++;
    }
    for (j = 0; j < g; j++, i++)
    {
        sum *= 10;
        t = sum;
        stroka[i] = t;
    }
    stroka[i] = '\0';
    for (i = 0; stroka[i] != '\0'; i++)
    {
        if (stroka[i] == ' ')
        {
            if (stroka[i - 1] != ' ')
            {
                printf("%c", stroka[i]);
            }
        }
        else printf("%c", stroka[i]);
    }
    free(stroka);
    return 0;
}

