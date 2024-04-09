#include <stdio.h>
int main()
{
    int a[10][10], sum=0,i,j, Asum=0;

    printf("\nEnter the elements of 1st matrix: \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++) {
            //printf("Enter a%d%d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++) {
            if (i==j){
            sum=sum+a[i][j];
            }
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++) {
            if (i+j==2){
            Asum=Asum+a[i][j];
            }
        }
    }
    printf("Sum of diagonal elements: %d",sum);
    printf("\nSum of anti diagonal elements: %d", Asum);



}