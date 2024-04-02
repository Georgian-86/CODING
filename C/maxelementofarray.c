#include <stdio.h>
int main()
{
    int arr[5],i,max,min;
    for (i=0; i<5 ; ++i) {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]) ;
    }
    max = arr[0];
    for (i=1; i<5 ; ++i) {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    min = arr[0];
    for (i=1; i<5 ; ++i) {
        if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("Maximum element is %d\n",max);
    printf("Minimum element is %d",min);

}