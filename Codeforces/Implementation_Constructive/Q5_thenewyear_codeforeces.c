#include <stdio.h>
int min(int a , int b);
int max(int a , int b);

int main()
{

    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    if ((1 <= x1 &&x1 <= 100) && (1 <= x2 && x2 <= 100) && (1 <= x3 && x3 <= 100))
    {
        printf("%d", max(max(x1,x2),x3) - min(min(x1,x2), x3));
        
    }
    return 0;
}
int max(int a , int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int min(int a, int b){
    if(a<b){
        return a;

    }else{
        return b;
    }
}
