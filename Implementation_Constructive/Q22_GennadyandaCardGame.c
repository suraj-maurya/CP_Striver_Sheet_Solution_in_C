// Welcome || 23-01-2024

#include <stdio.h>
int main()
{
    char str[3];
    int check = 0;
    scanf("%2s",str);
    for (int i = 0; i < 5; i++)
    {
        char card[3];
        scanf("%2s",card);
        getchar();
         if (str[0]==card[0] || str[1]==card[1] ) check = 1;
    }

    if (check)printf("YES");
    else printf("NO");
    return 0;
}