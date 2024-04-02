#include <stdio.h>
int main(){
    int a[100],n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("addrs of array elements: ");{
        for (i=0;i<n;i++){
            printf("%u\n",&a[i]);
        }
    }

}