#include <stdio.h>
int main()
{
    int i,age[7]={30,31,32,33,34,35,36};
    for(i=0;i<=6;i++){
        age[i]=age[i]+10;
    }
    for (i = 0; i <=6; i++) {
        printf("age[%d] = %d\n", i, age[i]);
    }
}