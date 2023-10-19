#include <stdio.h>

int stringLength(char *word)
{
    char *tmp = word;
    while (*tmp != '\0')
    {
        tmp++;
    }

    return (int)(tmp - word);
}
char *copyString(char *dest, char *origin)
{
    char *copy = dest;
    char *current = origin;
    while (*current != '\0')
    {
        *dest = *current++;
        dest++;
    }
    *dest = '\0';

    return copy;
}
char *concatString(char *word1, char *word2)
{
    char *lastEl = word1;
    while (*lastEl != '\0')
    {
        lastEl++;
    }
    copyString(lastEl, word2);
    return word1;
}

int main()
{
    char word1[30] = "myNameIs:";
    char word2[30] = " SlimShady";
    printf("First sentence is: %s\n", word1);
    printf("Second sentence is: %s\n", word2);
    printf("Concatenation of two sentences is: ");
    char *word3 = concatString(word1, word2);
    printf("%s", word3);
    return 0;
}
