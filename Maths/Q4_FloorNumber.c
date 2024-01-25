// Welcome || 25-01-2024 || 11:47:01
#include <stdio.h>
#include <time.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, x, floor = 1;
        scanf("%d%d", &n, &x);
        if (n > 2)
        {
            floor = ((n - 2) / x) + 1;
            if (((n - 2) % x) != 0) floor += 1;
        }

        printf("%d\n", floor);
    }

    return 0;
}