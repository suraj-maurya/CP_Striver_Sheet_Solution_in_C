#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0, max = 0, samp = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &samp);
        if (samp > a)count += 1;
        else count = 1;
        if (count > max) max = count;
        a = samp;
    }

    printf("%d", max);

    return 0;
}