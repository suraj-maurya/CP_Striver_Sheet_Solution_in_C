// Welcome || 27-01-2024 || 17:09:37
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c, n, left, max, max1, max2;
        scanf("%d%d%d%d", &a, &b, &c, &n);
        if (a > b)
        {
            if (a > c)
            {
                max = a;
                max1 = b;
                max2 = c;
            }
            else
            {

                max = c;
                max1 = a;
                max2 = b;
            }
        }
        else
        {
            if (b > c)
            {
                max = b;
                max1 = a;
                max2 = c;
            }
            else
            {
                max = c;
                max1 = a;
                max2 = b;
            }
        }
        if (n >= 3)
        {
            left = (n - ((max - max1) + (max - max2))) % 3;
        }
        else
            left = 1;

        if (left == 0)
            printf("YES\n ");
        else
            printf("NO\n ");
    }
    return 0;
}