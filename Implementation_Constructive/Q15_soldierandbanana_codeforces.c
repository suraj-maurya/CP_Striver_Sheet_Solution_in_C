#include <stdio.h>

int main() {
int k,n,w, total=0,borrow;
scanf("%d %d %d", &k, &n,&w);
for (int i = 1; i <= w; i++)
{
    total=total +k*i;
}
if (total>n)
{
 borrow=total - n;
}else{
    borrow=0;
}

printf("%d", borrow);

return 0;
}