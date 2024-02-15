#include <iostream>
using namespace std;
int main() {

    int marks;
    cin>>marks;
    if (marks > 60){
        cout<<"Passed"<<endl;
    }
    else {
        cout<<"Failed"<<endl;
    } 

    marks>60 ? cout<<"Passed"<<endl  : cout<<"Failed"<<endl;



    return 0;
}