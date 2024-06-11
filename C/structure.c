#include <stdio.h>
int main()
{
    struct stu{
        int rno;
        float gpa;
    } s[60];
    int i, n;
    printf("Enter the number of students: \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("\nenter info of %dth student: \n",i);
        scanf("%d%f",&s[i].rno,&s[i].gpa);
    }
    printf("\nthe entered information of students having gpa < 5");
    for (i=1;i<=n;i++){
        if (s[i].gpa<=5.00){
            printf("\nRoll no: %d", s[i].rno);
        }
    }
}