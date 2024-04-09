#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10],i,j,k;

    printf("\nEnter the elements of 1st matrix: ");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of second matrix: ");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++) {
            c[i][j]=0;
            for (k=0;k<3;k++){
                c[i][j] = c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("The Resultant Matrix is:\n");
    for (i=0; i<3; i++) {
       for (j=0; j<3; j++) {
           printf("%d\t",c[i] [j]);
       }
       printf("\n");
   }

    
    for(i=0; i<3; i++){
      for(j=0; j<3; j++){
         c[i][j] = a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
         }
     }
   // Displaying the resultant matrix
   printf("The Resultant Matrix is:\n");
   for (i=0; i<3; i++) {
       for (j=0; j<3; j++) {
           printf("%d\t",c[i] [j]);
       }
       printf("\n");
   }
   return 0;

}