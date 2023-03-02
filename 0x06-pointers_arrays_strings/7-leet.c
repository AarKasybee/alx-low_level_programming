#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * leet - encodes a string into leet code
 *
 * @p: pointer to a character
 *
 * Return: returns a char val
 */

char *leet(char *p)
{
	
        int i = 0, j;
        int length = strlen(p);
        char *final;
        char leet_map[256] = {0};

        final = malloc(length + 1);
        memset(final, 0, length + 1);
        strcpy(final, p);

        leet_map['a'] = leet_map['A'] = '0' + 4;
        leet_map['e'] = leet_map['E'] = '0' + 3;
        leet_map['o'] = leet_map['O'] = '0' + 0;
        leet_map['t'] = leet_map['T'] = '0' + 7;
        leet_map['l'] = leet_map['L'] = '0' + 1;
        while (p[i] != '\0')
        {
                j = (unsigned char) p[i];
                final[i] = leet_map[j] ? leet_map[j] : p[i];
                i++;
        }
        strcpy(p, final);
        free(final);
        return (p);
}
