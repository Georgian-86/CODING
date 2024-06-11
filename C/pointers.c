/*#include <stdio.h>
int main()
{
    int  a = 10;
    int *p= &a;
    printf("%d\n",&a); //prints the address of 'a' which is stored in 'p'. So, it prints value of 'p', not 'a'. To print 'a', use %
    printf("Value of a is %d\n", a); // Value of a is 10
    printf("Address of a is %u \n" ,&a );// Address of a is 987654321
     
    printf("\n");
     
    printf("Value at the address stored in p is %d\n", *p); // Value at the address stored in p is 10  
    printf("Address stored in p is %x \n" ,p );// Address stored in p is 987654321
    printf("value stored in p is %u \n" ,*p );// Address stored in p is 987654329
    return 0;
}*/
#include<stdio.h>
int lowest(int a[],int n){
    for(int i=1;i<n; i++){
        int l=a[0];
        if(a[i]<a[0]){
            l=a[i];
            return i;
        }
        
    }
}
int average(int a[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    int avg = sum/n;
    return avg;
}
int main(){
    int N, i, a[N], low, avg;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    low=lowest(a,N);
    avg=average(a,N);

    a[low]=(a[low])+avg;
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
}