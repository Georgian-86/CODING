#include <iostream>
using namespace std;
int main(){

    int base;
    cin>>base;

    int exp;
    cin>>exp;

    int num=1;

    for (int i = 1; i<=exp; i++)
    {
        num=num*base;
        cout<<num<<endl;
        }

        cout<<num<<endl;
    
}