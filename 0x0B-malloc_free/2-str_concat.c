#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two input strings, s1 and s2
 * @s1: the first input string to concatenate
 * @s2: the second input string to concatenate
 * Return: a concatenated string or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
    char *conct;
    int i, ci;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    // Calculate the length of s1
    i = 0;
    while (s1[i] != '\0')
        i++;

    // Calculate the length of s2
    ci = 0;
    while (s2[ci] != '\0')
        ci++;

    // Allocate memory for the concatenated string conct
    conct = malloc(sizeof(char) * (i + ci + 1));

    if (conct == NULL)
        return (NULL);

    // Copy s1 to conct
    i = 0;
    while (s1[i] != '\0')
    {
        conct[i] = s1[i];
        i++;
    }

    // Copy s2 to conct
    ci = 0;
    while (s2[ci] != '\0')
    {
        conct[i] = s2[ci];
        i++;
        ci++;
    }

    // Null-terminate the concatenated string
    conct[i] = '\0';

    return (conct);
}
