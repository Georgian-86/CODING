#include <stdio.h>
void reference(int x[],int size); 
void value(int);
int main()
{
    int arr[]={1,2,3,4,5};
    int i;
    printf("Referencing the array elements:\n");
    reference(arr,5);
    printf("\n");
    printf("Modifying the array elements using value function:\n");
    for(i=0;i<5;i++){
        value(arr[i]);
    }
    return 0;
}
void reference(int x[],int size)
{
    int  i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",x[i]);
    }    
}
void value(int u)
{
    printf("%d\t",u);
}