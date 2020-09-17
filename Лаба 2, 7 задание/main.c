#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("chcp 65001");
    system("cls");
    int mas[256];
    char str[256];
    int i, max = 0, symbol;
    gets (str);
    for (i = 0; i < 256; i++)
    {
        mas[i] = 0;
    }
    for (i = 0; str[i]!='\0'; i++)
    {
       if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
          mas[str[i]]++;
    }
    max=mas[0];
    for (i = 1; i < 256; i++)
    {
       if (max < mas[i])
       {
          max = mas[i];
          symbol = i;
       }
    }
    printf("Буква %c встречается наибольшее количество раз - %d", symbol, max);
}
