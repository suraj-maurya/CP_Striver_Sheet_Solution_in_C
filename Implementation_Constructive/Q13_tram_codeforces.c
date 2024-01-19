#include <stdio.h>
#include <stdlib.h>

int main() {
int n ;
scanf("%d", &n);
int val=0, max=0;
for (int  i = 0; i < n ; i++)
{
    int ai, bi;
    scanf("%d %d", &ai,&bi);
    val= val+bi-ai;
    if (max<val)
    {
        val=max;
    }
}
printf("%d",abs(val));

return 0;
}