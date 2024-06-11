#include <stdio.h>
int main()
{
    int  c,n,i,j, r=0;
    for (i=21; i<=40; i++)
    {
        c=0;
        for (j=2;j<=i;j++)
        {
            if(i%j==0){
            c++;
                if (c==2){
                    r++;
                }
            }

        }
    printf("%d",r);
    
    if (c==2){
        printf("%d is a prime number",i);
    }
    }
    return 0;
}