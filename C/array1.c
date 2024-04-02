#include <stdio.h>
int main()
{
    int i,marks[5],sum=0;
    float avg;
    printf("enter the marks for 5 subjects\n");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for (i=0;i<=4;i++){
        printf("%d\n",marks[i]);
        sum=sum+marks[i];
        avg=sum/5;
    }
    printf("average= %f",avg);


}