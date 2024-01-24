// Welcome || 24-01-2024
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char str[101];
        scanf("%s", str);
        size_t len = strlen(str);
        int start = 200, end = 0, val = 0;

        for (int j = 0; j < len; j++)
        {
            if (str[j] == '1' && start == 200)
                start = j;
            else if (str[j] == '1' && start != 200)
                end = j;
        }
        for (int l = start; l < end; l++)
        {
            if (str[l] == '0')
                val++;
        }
        printf("%d\n", val);
    }

    return 0;
}