#include <stdio.h>
int main()
{
    int i, n, r, n1, sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        r=n%10;
        if (r%3==0)
        sum=sum+r;
        n/=10;
        printf("%d",sum);
    }
    return 0;
}