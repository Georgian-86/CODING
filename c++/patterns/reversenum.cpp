#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter the number u want to reverse :";
    cin >> num;

    int result = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        result = result * 10 + lastdigit;
        num /= 10;
    }

    cout << result << endl;
}