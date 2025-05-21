#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "This programs evaluates two numbers. Please insert the first one" << endl;
    cin >> a;
    cout << "Please insert the other number to evaluate" << endl;
    cin >> b;
    if (a == b)
    {
        cout << a << " is equal to " << b << endl;
    }
    else if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else if (a < b)
    {
        cout << b << " is greater than " << a << endl;
    }
    else
    {
        cout << "The data you entered is not valid. Please try again." << endl;
    }
    return 0;
}