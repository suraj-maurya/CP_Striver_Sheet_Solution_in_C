// Welcome || 24-01-2024
#include <stdio.h>

int main()
{
    int n, num = 0, p=0;
    scanf("%d", &n);
    char t[57], s[10];
    scanf("%s", t);
    for (int i = 0; i < 11; i++)
    {
        p+=i;
        if(p<=n){
        s[num] = t[p];
        num++;
        }else break;
    }
    if(num==1)s[num] = '\0';
    printf("%s\n",s);

    return 0;
}