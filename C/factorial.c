// You are using GCC
#include <stdio.h>
int main(){
    int m,n=1,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        m=m*i;
    }
    printf("factorial=%d",m);
}