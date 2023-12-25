#include <iostream>
// #include<string>
using namespace std;

void GetSum(int &Sum)
{
    int Number;
    for (int i = 0; i <= 4; i++) {
        cout << "Please Enter Number " << i + 1 << endl;
        cin >> Number;
        if (Number >= 50) {
            continue;
        }
        Sum += Number;
    }
}

int main()
{
    int Sum;
    GetSum(Sum);
    cout << "Sum is: " << Sum;
    return 0;
}