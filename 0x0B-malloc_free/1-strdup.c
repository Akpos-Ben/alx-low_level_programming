#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: a pointer to a string (char *)
 * Return: a pointer to the duplicated string or NULL if allocation fails
 */
char *_strdup(char *str)
{
    char *aaa;
    int i, r = 0;

    if (str == NULL)
        return (NULL);

    // Calculate the length of the input string 'str'
    i = 0;
    while (str[i] != '\0')
        i++;

    // Allocate memory for the new string 'aaa', including space for the null terminator
    aaa = malloc(sizeof(char) * (i + 1));

    if (aaa == NULL)
        return (NULL);

    // Copy the characters from 'str' to 'aaa'
    for (r = 0; str[r]; r++)
        aaa[r] = str[r];

    // Null-terminate the duplicated string
    aaa[r] = '\0';

    return (aaa);
}
