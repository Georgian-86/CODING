#include <stdio.h>
int main()
{
    void *p;
    int a=10;
    float b=3.1;
    char c='a';
    p=&a;
    printf("%d\n",*(int *)p);
    p=&b;
    printf("%.2f\n",* (float*)p);
    p=&c;
    printf("%c\n",* (char*)p);
    return 0;
}