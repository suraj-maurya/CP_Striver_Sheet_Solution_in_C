#include <stdio.h>
#include <string.h>  

int main() {
    int n;
    scanf("%d", &n);
    getchar();  

    int X = 0;
    char s[6];

    while (n > 0) {
        scanf("%5[^\n]", s);
        getchar();  

        if (strcmp(s, "X++") == 0 || strcmp(s, "++X") == 0) {
            X++;
        } else {
            X--;
        }
        n--;
    }

    printf("%d \n", X--);
    

    return 0;
}
