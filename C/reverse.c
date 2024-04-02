#include <stdio.h>
int rev(int n)
{
    if (n<=0)
    
    {
        return 0;
    }
    else
    {
        printf("%d",n);
        rev(n-1);
        
    }    
}

int main()
{
    int result;
    result = rev(5);
    printf("%d",result);
}