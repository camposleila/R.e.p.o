#include <iostream>

using namespace std;

int main()
{
    double x; // Declaring the data type and name
    cout << "Welcome, please insert the purchase amount to know if its applicable the 10 percent discount" << endl;
    // Welcome message and indication
    cin >> x; // the user insert the data
    // here starts the decision making (process)
    if ((x > 100) && (x == 100)) // idk why is not working help lol 
    {
        cout << "Your purchase has a 10 percent discount. The price to pay is " << (x - x * 0.1) << endl;
    }
    else if ((x < 100) && (x > 0))
    {
        cout << "Your purchase is not applicable to the 10 percent discount. The price to pay is" << x << endl;
    }
    else
    {
        cout << "Please insert a valid price" << endl;
        if ((x > 100) && (x == 100))
        {
            cout << "Your purchase has a 10 percent discount. The price to pay is " << (x - x * 0.1) << endl;
        }
        else if ((x < 100) && (x > 0))
        {
            cout << "Your purchase is not applicable to the 10 percent discount. The price to pay is" << x << endl;
        }
    }

    return 0;
}
