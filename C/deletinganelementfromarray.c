#include <stdio.h>
int main() {
    int a[100], n, i,pos;
    printf("\n Enter the number of elements:");
    scanf("%d", &n);
    printf("\nEnter array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Position: ");
    scanf("%d",&pos);
    pos=pos-1;
    for (i=pos;i<n-1;i++){
        a[i]=a[i+1];
    }
    for (i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
    return 0;
}