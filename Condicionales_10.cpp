//Pide el peso de un paquete y cobra $5 si pesa hasta 5kg, $10 si pesa entre 6kg y 10kg, y $15 si pesa más de 10kg.
#include <iostream>
using namespace std; 

int main (){
double w; 
cout << "insert the package weight to know the shipping fee" << endl; 
cin >> w; 

if (w<=5 && w>0) {
    cout << "Your shipping fee is $5" << endl; 
}
else if (w>5 && w<=10) {
    cout << "Your shipping fee is $10" << endl; 
}
else {
    cout << "Your shipping fee is $15" << endl; 
}


return 0; 
}