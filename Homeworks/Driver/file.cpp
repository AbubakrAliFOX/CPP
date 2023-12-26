#include <iostream>
// #include<string>
using namespace std;

struct DriverInfo
{
    int Age;
    bool hasLiscence;
};

bool CheckDriverEligibility(DriverInfo Driver)
{
    if (Driver.Age >= 21 && Driver.hasLiscence == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

DriverInfo GetDriverInfo()
{
    DriverInfo Driver;
    cout << "Enter your age: " << endl;
    cin >> Driver.Age;

    cout << "Do you have a drivers liscence?(0 = No, 1 = Yes):  " << endl;
    cin >> Driver.hasLiscence;

    return Driver;
}

void PrintDriverEligiblity(bool isEligible)
{
    if (isEligible == true)
    {
        cout << "Congrats, we will hire you";
    }
    else
    {
        cout << "Sorry, Can\'t hire you";
    }
}

int main()
{
    PrintDriverEligiblity(CheckDriverEligibility(GetDriverInfo()));
    return 0;
}