#include <iostream>
// #include<string>
using namespace std;

int ReadPIN()
{
    int Number;
    cout << "Please enter your PIN number: " << endl;
    cin >> Number;
    return Number;
}

bool Login()
{
    int PIN;
    int Counter = 3;
    do
    {
        PIN = ReadPIN();
        if (PIN == 1234)
        {
            return true;
        }
        else
        {   
            Counter--;
            cout << "Wrong pin, you have" << to_string(Counter) << "attempts left" << endl;
        }
    } while ((PIN != 1234) && (Counter != 0));

    return false;
}



int main()
{
    int PIN;
    if (Login())
    {
        cout << "Your account balance is 7500";
    }

    return 0;
}