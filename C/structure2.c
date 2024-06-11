#include <stdio.h>
int main()
{
    struct stu{
        int rno;
        float CA1;
        float CA2;
        float CA3;
    } s[60];
    int i, j, n, sum=0, min_mark;
    float best2, weightage;
    printf("Enter the number of students: \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("\nenter info of %dth student: \n",i);
        printf("Enter Roll No: ");
        scanf("%d",&s[i].rno);
        printf("Enter marks in three exams:\nCA1 = ");
        scanf("%f",&s[i].CA1);
        printf("CA2 = ");
        scanf("%f",&s[i].CA2);
        printf("CA3 = ");
        scanf("%f",&s[i].CA3);
        // &s[i].CA1,&s[i].CA2,&s[i].CA3);
        for (j=1;j<=n;j++){
                sum = s[i].CA1+s[i].CA2+s[i].CA3;
                if (s[i].CA1 <s[i].CA2 && s[i].CA1<s[i].CA3){
                    min_mark= s[i].CA1;}
                else if(s[i].CA2 <s[i].CA1 && s[i].CA2<s[i].CA3) 
                     min_mark= s[i].CA2;
                else   min_mark= s[i].CA3;
                best2 = sum-min_mark;
                weightage = (best2/60)*50;
            }
        printf("Roll No: %d CA weightage= %.2f",s[i].rno,weightage);
    }
    return 0;

}
