#include <iostream>
using namespace std;

int main()
{
    short int Num1, Num2, Holder;
    cout << "Please enter a Num1: ";
    cin >> Num1;

    cout << "Please enter a Num2: ";
    cin >> Num2;

    cout << "Your Numbers are: " << endl;
    cout << Num1 << endl;
    cout << Num2 << endl;

    Holder = Num1;
    Num1 = Num2;
    Num2 = Holder;

    cout << "Your Swaped Numbers are: " << endl;
    cout << Num1 << endl;
    cout << Num2 << endl;


    return 0;
}