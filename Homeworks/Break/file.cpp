#include <iostream>
// #include<string>
using namespace std;

void SearchNumber(int Number, int Arr[], int Length)
{
    cout << "Enter a number that you want to look for: " << endl;
    cin >> Number;
    for (int i = 0; i < Length; i++)
    {
        if (Arr[i] == Number)
        {
            cout << "Your number " << Number << " Was found in " << i << endl;
            break;
        }
    }
}

int main()
{
    int Arr[] = {1, 3, 2, 3, 3, 43, 23, 324, 20, 30};
    int Number, Length = sizeof(Arr) / sizeof(int);

    SearchNumber(Number, Arr, Length);

    return 0;
}