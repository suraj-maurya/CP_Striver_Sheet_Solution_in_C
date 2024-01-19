#include <stdio.h>

int main(){
    //Luke Skywalker gave Chewbacca an integer number x
    int x;
    scanf("%d",&x);
    // Inverting digit t means replacing it with digit 9-t.
    //  number x to the minimum possible positive number by inverting some (possibly, zero) digits
    // The decimal representation of the final number shouldn't start with a zero.  x[0]!=0
    
    while(x>0){
        int y=x%10;
        printf("%d \n", y);
        x/=10;
    }
    
}