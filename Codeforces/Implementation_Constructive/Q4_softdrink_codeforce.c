#include <stdio.h>
void compare(int a, int b, int c);

int main() {
    // n=the number of the people
    // k=number of the bottle
    // l= capacity of the isngle bottle in the milliliter
    // c= number of the limes
    // d=number of slice could get from the lime 
    // p=wieght of the salt in the grams 

    int n,k,l,c,d,p,nl,np;
    if (1<= scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np)<=1000)
    {
        int num_toast_drink=((k*l)/n)/nl;
        int num_toast_slice=(c*d)/n;
        int num_toast_salt=(p/n)/np;
        compare(num_toast_drink,num_toast_salt,num_toast_slice);
        
    }
    

return 0;
}

void compare(int a, int b, int c){
    int num;
    if(a<b){
        if (a<c)
        {
            num=a;
        }else{
            num=c;
        }
    }else{
        if (b<c)
        {
            num=b;
        }else{
            num=c;
        }
        
    }
    printf("%d", num);
}