#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 *
 * Description: This function converts the string pointed to by @s into an
 * integer, taking into account any leading + or - signs. If no numbers
 * are found in the string, the function returns 0.
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, result = 0;

    /* Skip leading whitespace characters */
    while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t'))
    {
        i++;
    }

    /* Handle any leading + or - signs */
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

    /* Convert the digits to integer */
    while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    /* Return the result with the correct sign */
    return (result * sign);
}

