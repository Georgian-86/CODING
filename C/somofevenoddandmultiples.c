#include<stdio.h>
int main() {
    int a[100], n, i,se=0,so=0,s5=0;
    printf("\n Enter the number of elements:");
    scanf("%d", &n);
    printf("\nEnter array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0;i<=n;i++){
        if (a[i]%2==0){
            se=se+a[i];
        }
        if (a[i]%2==1){
            so=so+a[i];
        }
        if (a[i]%5==0){
            s5=s5+a[i];
       }
    printf("Sum of all even no: %d",se);
    printf("\nSum of all odd no : %d",so);
    printf("\nSum of all multiple of 5 : %d\n",s5);
     return 0;
    }
}