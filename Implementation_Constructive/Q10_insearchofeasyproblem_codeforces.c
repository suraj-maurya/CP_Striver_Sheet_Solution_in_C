#include <stdio.h>

int main() {
int n, check=0;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
    if(arr[i]==1){
        check=1;
    }

}
if (check==1)
{
    printf("HARD");
}else{
    printf("EASY");
}



return 0;
}