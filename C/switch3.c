#include <stdio.h>
int main()
{
    int a,b,op;
    printf("1:& 2:| 3:^ 4:~ 5:<< 6:>>\n");
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("\nEnter the op value" );
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("a&b= %d\n",a&b);
        break;
        case 2:
        printf("a|b= %d\n",a|b);
        break;
        case 3:
        printf("a^b= %d\n",a^b);
        break;
        case 4:
        printf("~a=%d ~b=%d\n",~a,~b);
        break;
        case 5:
        printf("a<<b= %d\n",a<<b);
        break;
        case 6:
        printf("a>>b= %d\n",a>>b);
        break;
        
        default:
        printf("Invalid op");
        break;
        }
    printf("program over");
    return 0;
}