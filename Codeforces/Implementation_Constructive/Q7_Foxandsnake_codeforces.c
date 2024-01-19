#include <stdio.h>

int main()
{
    int num;
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("#");
            }
        }
        else
        {
            ++num;
            for (int j = 0; j < m; j++)
            {
                if (num % 2 != 0 && j == (m - 1))
                {
                    printf("#");
                }
                else if (num % 2 == 0 && j == 0)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
