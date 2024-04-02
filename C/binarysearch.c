#include<stdio.h>
int main() {
    int a[100], n, i, search,status=0;
    printf("\n Enter the number of elements:");
    scanf("%d", &n);
    printf("\nEnter array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to be searched in array:");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if(a[i]==search)
        {
            status=1;
            break;
        }
    }
    if (status==0)
        printf("Not found");
    else
        printf("Found");
}