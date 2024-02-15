#include <iostream>
using namespace std;
int main()
{

    int num1, num2;
    num1 = 10;
    num2 = 4;

    cout << "sum : " << num1 + num2 << endl;        // addition operator
    cout << "differance : " << num1 - num2 << endl; // subtraction operator
    cout << "product : " << num1 * num2 << endl;    // product operator
    cout << "divison : " << num1 / num2 << endl;    // division operator
    cout << "remainder : " << num1 % num2 << endl;  // modulo operator, ans should be 2.5 but it gives 2 bcz datatype for numn is int

    float numb1, numb2;
    numb1 = 15;
    numb2 = 4;

    cout << "float division : " << numb1 / numb2 << endl;
    // cout<<"remainder : "<<numb1%numb2;
    // modulo operator does not works in float datatype

    // now increment&decrement operators are of two types ++/--5 is pre increment/decrement and 5++/-- is post increment/decrement

    // post increment and  decrement
    int a = 5;
    cout << "post increment : " << a++ << endl; // in post increment code returns the same value and then increments so here ans should
    // be 5 and code then  updates the value of 'a' ie 6

    cout << "post decrement : " << a-- << endl; // here value of a was 6 so it should give ans as 6 and then a becomes 5
    cout << a << endl;                          // ans should be 5

    // pre increment and decrement
    // in pre increment/decrement value is updated first and then given
    cout << "pre increment : " << ++a << endl;
    cout << "pre decrement : " << --a << endl;

    return 0;
}