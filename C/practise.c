#include <stdio.h>
int main()
{
    int i,so=0, se=0, s5=0;
    for (i=21; i<=31; i++)
    {
        if (i%2==0){
            se=se+i;
            printf("se=%d",se);}
        
        if (i%2==1){
            so=so+i;
            printf("\nso=%d",so);}
        
        if (i%5==0){
            s5=s5+i;
            printf("s5=%d",s5);}
    }
    return 0;
}