#include <iostream>
using namespace std;
int main() {
    // to print if a number is divisible by 3 or 5
    int num;
    cin>>num;
    if ((num%3==0) || (num%5==0)){
        cout<<num<<endl;
    }
    return 0;
}