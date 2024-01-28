// Welcome || 27-01-2024 || 16:19:48
#include <stdio.h>
#include <time.h>

int main()
{
    int t, lan=0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        if (n==1)
        {
        if(m%2==0)lan=m/2;
        else lan=(m+1)/2;
        }else{
        if (n % 2 == 0)lan = (n / 2) * m;
        else
        {
            if (m % 2 == 0)lan = (((n - 1) / 2) * m) + (m / 2);
            else lan = (((n - 1) / 2) * m) + ((m + 1) / 2);
        }
        }
        printf("%d\n", lan);
    }
    return 0;
}