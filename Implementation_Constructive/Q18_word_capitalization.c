#include <stdio.h>

int main()
{
    char word[1000];
    scanf("%5s", word);
    if (word[0] >= 97)
    {
        word[0] = word[0] - 32;
    }

    printf("%s \n", word);

    return 0;
}