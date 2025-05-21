#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Welcome. Please insert a natural number to know if it is pair" << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a << " is pair." << endl;
    }
    else
    {
        cout << a << " is not pair." << endl;
    }
    return 0;
}