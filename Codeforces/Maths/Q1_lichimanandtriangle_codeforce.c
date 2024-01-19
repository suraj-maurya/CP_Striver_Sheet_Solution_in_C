#include <stdio.h>

int main()
{
    int t;
    // printf("Enter the number t: ");
    if (1 <= scanf("%d", &t) <= 1000)
    {

        for (int i = 0; i < t; i++)
        {
            int  a, b, c, d;
            // printf("Enter the value of a, b, c, d : ");
            if (1 <= scanf("%d %d %d %d", &a, &b, &c, &d) <= 10 ^ 9)
            {
                printf("%d %d %d \n", b, c, c);
            }
        }
    }

    return 0;
}