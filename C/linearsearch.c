#include <stdio.h>
int main()
{
    int arr[5],i,e,s=0;
    for (i=0; i<5 ; ++i) {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]) ;
    }
    printf("enter the element you want to search: ");
    scanf("%d",&e);
    for (i=0;i<5;++i) {
        if (e==arr[i]){
            s=1;
            break;
        }
    }
    if (s==0)
    printf("\n%d is not present in the array.", e);
    else  
    printf("\n%d is present at position %d of the array.", e, i+1);  
    
    return 0;
}