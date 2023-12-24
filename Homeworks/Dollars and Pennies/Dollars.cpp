#include <iostream>
using namespace std;

int main()
{
    float Pen, Nick, Di, Qua, Doll, Total;

    cout << "Please enter Pennies: ";
    cin >> Pen;

    cout << "Please enter Nickles: ";
    cin >> Nick;

    cout << "Please enter Dimes: ";
    cin >> Di;

    cout << "Please enter Quarters: ";
    cin >> Qua;

    cout << "Please enter Dollars: ";
    cin >> Doll;

    Total = Doll + (0.25 * Qua) + (0.1 * Di) + (0.05 * Nick) + (0.01 * Pen);
    cout << "Total is: " << Total << " Dollars" << endl;
    cout << "Or " << Total * 100 << " Pennies";

    return 0;
}