#include <stdio.h>
int main()
{
    int a[]={10,2,3,40};
    int *p = a;
    printf("%d",*p); //prints 10
    p++;
    printf("%d",*p);
    p=p+2;
    *p=30;
    p = p+ 2;
    *p=30;
    p=p-1;
    *p=-3;
    //display array list
    printf("%d",*p);



}