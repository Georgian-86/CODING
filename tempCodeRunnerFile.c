#include <stdio.h>
int main()

int swap(int a,int b);

{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    printf("a=%d, b=%d", a, b); 
    swap(a,b);
    printf("a=%d, b=%d", a, b);
}

int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}