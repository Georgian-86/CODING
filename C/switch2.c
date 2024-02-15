// You are using GCC
#include <stdio.h>
int main(){
    int a,b,op;
   // printf("1:> 2:< 3:== \n");
    //printf("enter op: \n");
    scanf("%d",&op);
    //printf("enter a,b\n");
    scanf("%d%d",&a,&b);
    switch (op){
        case 1:
        if (a>b){
        printf("a is greater");}
        else {
            printf("b is greater");
        }
        break;
        case 2:
        if (a<b){
        printf("b is greater");}
        else{
            printf("a is grater");
        }
        break;
        case 3:
        if (a==b){
        printf("a is equal to b");}
        else {
          printf("a is not equal to b");
        }
        break;
        default:
        printf("Wrong Input");
    }
    printf("Program over");
}