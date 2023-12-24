#include <iostream>
using namespace std;

int main()
{
    float LoanAmount, Months;
    cout << "Please enter Loan Amount: ";
    cin >> LoanAmount;

    cout << "Please enter Months: ";
    cin >> Months;

    cout << "You need to pay " << LoanAmount / Months <<"$ each month" << endl;

    return 0;
}