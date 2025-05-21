#include <iostream>

using namespace std;

int main()
{
    int a;                // Declare the age of the person
    bool isEven = a > 18; // by this confirm the legal age
    cout << "Welcome, please confirm your age" << endl;
    cin >> a;
    if (a >= 18)
    {
        cout << "You are of legal age" << endl;
    }
    else
    {
        cout << "You are not of legal age" << endl;
    }

    return 0;
}
