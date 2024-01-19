#include <stdio.h>
int max(int *arr, int num);
int min(int arr[], int num);
void swap(int *arr, int i);
int main()
{
    int num;
    scanf("%d", &num);
    int soldier[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &soldier[i]);
    }
    int maxnumswap=max(soldier, num);
    swap(soldier, maxnumswap);


    printf("%d", maxnumswap+min(soldier,num));
    return 0;
}


// function

int max(int *arr, int num)
{
    int n = arr[0];
    int max_value = 0;
    for (int i = 1; i < num; i++)
    {
        if (arr[i] > n)
        {
            n = arr[i];
            max_value = i;
        }
    }
    return max_value;
}
int min(int arr[], int num)
{
    int n = arr[0];
    int min_value = 0;
    for (int i = num-1; i >=0; i-- )
    {
        if (arr[i] < n)
        {
            n = arr[i];
            min_value = i;
        }
    }
    if (min_value==0)
    {               
        return min_value;
    }else{ 
        return num - 1 - min_value;
    }
}
void swap(int *arr, int i){
    int n;
    for (int  j = i; j >0; j--)
    {
        n=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=n;
    }
    
}