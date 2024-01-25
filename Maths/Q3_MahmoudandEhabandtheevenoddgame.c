// Welcome || 24-01-2024
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    n = n - (n - (n % 2));
    if (n == 1) printf("Ehab");
    else printf("Mahmoud");
    return 0;
}