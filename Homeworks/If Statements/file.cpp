#include <iostream>
// #include<string>
using namespace std;

void ReadPIN(int &PIN)
{
    cout << "Please enter your PIN number: " << endl;
    cin >> PIN;

}

bool isPINValid(int PIN)
{
    if (PIN == 1234)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void ShowBalance (int PIN) {
    int Balance = 7500;
    if (isPINValid(PIN) == true) {
        cout << "You Balace is: " << Balance << endl;
    } else {
        cout << "Invalid Pin, Please try again" << endl;
    }
}

int main()
{
    int PIN;
    while (isPINValid(PIN) == false)
    {
        ReadPIN(PIN);
        ShowBalance(PIN);
    }
    

    return 0;
}