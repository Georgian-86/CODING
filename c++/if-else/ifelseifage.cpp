#include <iostream>
using namespace std;
int main()
{

    int age;
    cout << "Enter the age : " << endl;
    cin >> age;
    if (age < 13)
    {
        cout << "The given person is a child." << endl;
    }

    else if (age < 18)
    {
        cout << "The given person is a teenage." << endl;
    }

    else if(age < 60)
    {
        cout << "The given person is an adult."<<endl;
    }

    else
    {
        cout << "the given person is senior citizen."<<endl;
    }

    return 0;
}