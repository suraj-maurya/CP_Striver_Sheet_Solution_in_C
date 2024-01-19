#include <stdio.h>

int main() {
int n, k, val=0;
scanf("%d %d", &n, &k);
while(k>0){
    if (n%10!=0)
    {
        n=n-1;
    }else{
        n/=10;
    }
        k--;
    
}
printf("%d", n);

return 0;
}