#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text;
    int i, n, i_rem = 0, k_gl = 0, k_sog = 0;
    scanf("%d", &n);
    text = (char*) calloc (n, sizeof (char));
    fflush(stdin);
    gets(text);
    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'y' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U' || text[i] == 'Y')
        {
            k_gl++;
        }
        else if (text[i] == 'b' || text[i] == 'c' || text[i] == 'd' || text[i] == 'f' || text[i] == 'g' || text[i] == 'h' || text[i] == 'j' || text[i] == 'k' || text[i] == 'l' || text[i] == 'm' || text[i] == 'n' || text[i] == 'p' || text[i] == 'q' || text[i] == 'r' || text[i] == 's' || text[i] == 't' || text[i] == 'v' || text[i] == 'w' || text[i] == 'x' || text[i] == 'z' || text[i] == 'B' || text[i] == 'C' || text[i] == 'D' || text[i] == 'F' || text[i] == 'G' || text[i] == 'H' || text[i] == 'J' || text[i] == 'K' || text[i] == 'L' || text[i] == 'M' || text[i] == 'N' || text[i] == 'P' || text[i] == 'Q' || text[i] == 'R' || text[i] == 'S' || text[i] == 'T' || text[i] == 'V' || text[i] == 'W' || text[i] == 'X' || text[i] == 'Z')
        {
            k_sog++;
        }
        else if (text[i] == ' ' || text[i] == '.')
        {
            if (k_sog > k_gl)
            {
                for (; i_rem < i; i_rem++)
                {
                    printf("%c", text[i_rem]);
                }
                printf(" ");
            }
            i_rem = i + 1;
            k_gl = 0;
            k_sog = 0;
        }
    }
    if (k_sog > k_gl)
    {
        for (; i_rem < i; i_rem++)
        {
            printf("%c", text[i_rem]);
        }
        printf(" ");
    }
    return 0;
}
