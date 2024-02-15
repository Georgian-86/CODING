// You are using GCC
#include <stdio.h>
int main(){
    int a;
    printf("1:monday 2:tuesday 3:wednesday 4:thursday 5:friday 6:saturday 7:sunday \n");
    printf("enter a \n");
    scanf("%d",&a);
    switch (a){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Wrong Input");
    }
    printf("\n Program over");
}