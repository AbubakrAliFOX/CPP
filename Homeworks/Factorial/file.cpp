#include <iostream>
using namespace std;
 
int ReadPositiveNumber(int &N)
{

    do
    {
        cout << "Please Enter a positive number" << endl;
        cin >> N;
    } while (N < 0);

    return N;
}

int CalculateFactorial(int N)
{
    int Sum = 1;
    for (int i = N; i > 0; i--)
    {
        Sum = i * Sum;
    }

    return Sum;
}

void PrintFactorial(int Result)
{
    cout << "Your factorial is: " << endl;
    cout << Result;
}

int main()
{
    int N;
    PrintFactorial(CalculateFactorial(ReadPositiveNumber(N)));
    return 0;
}