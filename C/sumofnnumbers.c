// You are using GCC
#include <stdio.h>
int main(){
    int i,a,n,s=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d",&a);
        s=s+a;
    }
    printf("%d",s);
}