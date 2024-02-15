#include <iostream>
using namespace std;
int main() {
    // to print sum of first n natural nums
    int n;
    cin>>n;

    int sum=0;

    int i=1; //loop variable
    while (i<=n) //conditiom
    {
      sum+=i;  /* code */
      i++; //updating loop variable
      // cout<<i<<endl;
    }

    cout<<sum<<endl;
    cout<<i<<endl;
    
    return 0;
    

}