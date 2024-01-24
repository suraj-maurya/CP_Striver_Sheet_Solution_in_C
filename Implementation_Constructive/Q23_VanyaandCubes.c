// Welcome || 24-01-2024
#include <stdio.h>

int main()
{
    int n, num = 0, i = 0, total = 0;
    scanf("%d", &n);
    while ((total + num + i + 1) <= n)
    {
        i++;
        num += i;
        total += num;
    }
    printf("%d\n", i);

    return 0;
}