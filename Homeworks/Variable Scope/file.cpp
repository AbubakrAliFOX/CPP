#include <iostream>
// #include<string>
using namespace std;

int x = 1000;

void func() {
    cout << x << endl;
}

int main()
{
    int x = 2000;
    func();
    cout << x << endl;
    cout << ::x << endl;
    return 0;
}