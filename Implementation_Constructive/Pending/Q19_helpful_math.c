#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%99s", str);
    int a,b,c;
    for (int i = 0; i < strlen(str); i++)
    {   
        if (str[i]=='1')
        {
            a++;
        }else if (str[i]=='2')
        {
            b++;
        }else if (str[i]=='3')
        {
            c++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        str[i]='1+';
    }
    for (int i = a; i <a+b; i++)
    {
        str[i]='b+';
    }
    for (int i = b; i < a+b+c; i++)    {
        if (i!=(a+b+c-1))
        {
            str[i]='c';
        }else{
            str[i]='+3';
        }
        
    }
     printf("%s", str);
    
    
    
    
    


    return 0;
}