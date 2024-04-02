#include <stdio.h>
int add(int n)
{
    if  (n==0)
    {
        return 0;
    }
    else 
    {
        return n+add(n-1);
    }
}

int main()
{
    int result = add(5);
    printf("%d",result);
}