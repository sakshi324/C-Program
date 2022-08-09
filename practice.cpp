#include <stdio.h>

void strCpyCap(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30]; // Empty String

    strCpyCap(arr, brr);

    printf("%s", brr); // MMOS

    return 0;
}