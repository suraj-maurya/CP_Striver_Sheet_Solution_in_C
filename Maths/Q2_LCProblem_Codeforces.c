#include <stdio.h>

int main()
{
    int t;
    if (1 <= scanf("%d", &t) <= 10000)
    {

        for (int i = 0; i < t; i++)
        {
            int l, r;
            if (1 <= scanf("%d %d", &l, &r) <= 10 ^ 9)
            {
            int x, y;
                
                if (l * 2 <= r)
                {
                    x = l;
                    y = l * 2;
                }
                else
                {
                    x = -1;
                    y = -1;
                }
            printf("%d %d\n", x,y);
            }
            
        }

        return 0;
    }
}
