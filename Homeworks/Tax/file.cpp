#include <iostream>
using namespace std;

float ReadPositiveNumber(string Msg)
{
    float Number;
    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float AddFees(float Bill, float Percentage)
{

    return (Bill * Percentage) + Bill;
}

float CalculateTotalFee(float Bill1, float Bill2)
{
    return Bill1 + Bill2;
}

void PrintResult () {
    float Bill = ReadPositiveNumber("Please Enter Bill");
    float SalesPercentage = ReadPositiveNumber("Please Enter Services Fees");
    float Bill1 = AddFees(Bill, SalesPercentage);
    float TaxPercentage = ReadPositiveNumber("Please Enter Tax");
    float Bill2 = AddFees(Bill1, TaxPercentage);
    cout << Bill2;
}

int main()
{
    PrintResult();
    return 0;
}