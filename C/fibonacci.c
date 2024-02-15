// You are using GCC
#include <stdio.h>
int main(){
    int a=0,b=1,s,n,i;
    scanf("%d",&n);
    printf("%d%d",a,b);
    for (i=3;i<=n;i++){
        s=a+b;
        printf("%d",s);
        a=b;
        b=s;
    }
}