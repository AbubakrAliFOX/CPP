#include <iostream>
// #include<string>
using namespace std;

int main()
{
    for (int i = 0; i <= 25; i++)
    {
        for (int j = 0; j <= 25; j++)
        {
            cout << char(i + 65) << " " << char(j + 65);
            cout << "\n";
        }

    }
    

    return 0;
}