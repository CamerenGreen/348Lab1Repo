#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
            
        }
    }

    printf("The string in uppercase: %s\n", str);

    // reverse the string
    for (i=o, len = strlen(str); i <len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("The string in reverse: %s\n", str);
    return 0;
}
