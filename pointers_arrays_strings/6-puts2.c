#include <unistd.h>
#include "main.h"

void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i % 2 == 0)
        {
            write(1, &str[i], 1);  /* Use write to output the character */
        }
        i++;
    }

    write(1, "\n", 1);  /* Print the newline character */
}
