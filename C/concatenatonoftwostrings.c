#include <stdio.h>
int main()
{
    char x[100];
    int i=0;
    printf("Enter a string: ");
    gets(x);
    while (x[i]!='\0')  {
        i++;
    }
    printf("Length of the string is %d,",i);
    return 0;
}