// Welcome || 24-01-2024
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d ", &n);
    for (int i = 0; i < n; i++)
    {
        char Bor_num[5];
        int val = 0;
        scanf("%s", Bor_num);
        int digit = Bor_num[0] - 48;
        size_t num_digit = strlen(Bor_num);
        for (int J = 1; J <= digit; J++)
        {
            if (J == digit) val+=((num_digit * (num_digit+1))/2);
            else val+=10;
        }
        printf("%d\n", val);
    }

    return 0;
}