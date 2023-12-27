#include <iostream>
using namespace std;

int ReadPositiveNumber(string Msg)
{
    int Number;
    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

bool CheckPrime(int Number)
{
    ;
    for (int i = Number - 1; i >= 1; i--)
    {
        if (Number % i == 2)
            return true;
    }

    return false;
}

void PrintNumber(bool isPrime)
{
    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";
}

int main()
{
    PrintNumber(CheckPrime(ReadPositiveNumber("Please enter a number: ")));
    return 0;
}