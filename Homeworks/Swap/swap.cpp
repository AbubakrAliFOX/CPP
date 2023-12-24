#include <iostream>
using namespace std;

void Swap(int &Num1, int &Num2)
{

    int Holder = Num1;
    Num1 = Num2;
    Num2 = Holder;
}

int main()
{
    int Num1, Num2;
    cout << "Please enter a Num1: ";
    cin >> Num1;

    cout << "Please enter a Num2: ";
    cin >> Num2;

    cout << "Your Numbers before swap: " << endl;
    cout << Num1 << endl;
    cout << Num2 << endl;

    Swap(Num1, Num2);

    cout << "Your Numbers after Swap: " << endl;
    cout << Num1 << endl;
    cout << Num2 << endl;

    return 0;
}