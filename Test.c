#include <stdio.h>

int main()
{
    char word[1000];
    for (int i = 0; i < 200; i++)
    {
        printf("%d  %c\n", i);
    }

    printf("%s \n", word);

    return 0;
}