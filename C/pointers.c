#include <stdio.h>
int main()
{
    int  a = 10;
    int *p= &a;
    printf("%d\n",&a); //prints the address of 'a' which is stored in 'p'. So, it prints value of 'p', not 'a'. To print 'a', use %
    printf("Value of a is %d\n", a); // Value of a is 10
    printf("Address of a is %u \n" ,&a );// Address of a is 987654321
     
    printf("\n");
     
    printf("Value at the address stored in p is %d\n", *p); // Value at the address stored in p is 10  
    printf("Address stored in p is %x \n" ,p );// Address stored in p is 987654321
    printf("value stored in p is %u \n" ,*p );// Address stored in p is 987654329
    return 0;
}