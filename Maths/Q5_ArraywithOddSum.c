// Welcome || 25-01-2024 || 17:12:31
#include <stdio.h>
#include <time.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n = 0, num = 0, odd=0, even=0;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            if (a[j]%2!=0)
            {
            odd=j;
            }else even=j;
            
            if (j==n-1)
            {
                if (num%2==0)
                {
                   num=num+a[odd]; 
                }else num=num+a[even];
            }else num = num + a[j];
            
        }
        if (num % 2 != 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}