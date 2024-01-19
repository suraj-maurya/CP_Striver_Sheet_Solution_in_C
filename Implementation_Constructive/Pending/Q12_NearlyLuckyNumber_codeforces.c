#include <stdio.h>
#include <string.h>

int main() {
long long n;
int count=0;
scanf("%I64d", &n);

while(n!=0)
{
    if(n%10== 4 || n%10==7){
        count+=1;
    }
    n/=10;
}
if (count==4 | count==7)
{
    printf("YES");
}else{
    printf("NO");
}

return 0;
}