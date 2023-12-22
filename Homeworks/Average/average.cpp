#include <iostream>
using namespace std;

int main () {
    short int Num1, Num2, Num3;
    cout << "Please enter a Num1: ";
    cin >> Num1; 

    cout << "Please enter a Num2: ";
    cin >> Num2;

    cout << "Please enter a Num3: ";
    cin >> Num3;

    cout << "Average is: " << (Num1 + Num2 + Num3) / 3;
    
    return 0;
}