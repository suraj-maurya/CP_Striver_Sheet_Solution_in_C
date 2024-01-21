#include <stdio.h>
#include <string.h>
int main()
{
    char userName[100];
    scanf("%99s", userName);
    size_t lent = strlen(userName);
    char arr[lent];
    int count = 0;

    for (int i = 0; i < lent; i++)
    {
        for (int j = 0; j < lent; j++)
        {
            if (userName[i] != userName[j])
            {
                size_t t = strlen(arr);
                int check = 0;
                for (int k = 0; k < t; k++)
                {
                    if (userName[j] == arr[k])
                    {
                        check = 1;
                        
                    }
                }
                if (check == 0)
                {
                    arr[count] = userName[j];
                    count++;
                }
            }
        }
    }

    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {

        
        printf("IGNORE HIM!");
    }

    return 0;
}