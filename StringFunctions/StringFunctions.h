#include <stdio.h>

char *concatString(char *word1, int wordSize1, char *word2, int wordSize2)
{
    char *p;
    for (int i = 0; i < wordSize1 - 1; i++)
    {
        *(p + i) = *(word1 + i);
    }
    for (int i = 0; i < wordSize2; i++)
    {
        *(p + i + wordSize1) = *(word2 + i);
    }

    return p;
}