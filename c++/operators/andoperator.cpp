#include <iostream>
using namespace std;
int main() {

    int num;

    cin>>num;

    if ((num%2==0) && (num%3==0)) {
        cout<<num<<endl;
    } 
    // will return return true only if both statements are true...
    return 0;
}