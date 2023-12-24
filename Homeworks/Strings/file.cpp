#include <iostream>
// #include<string>
using namespace std;


int main()
{
    string st1, st2, st3;
    cout << "Enter string 1: ";
    getline(cin, st1);
    cout << "Enter string 2: ";
    cin >> st2;
    cout << "Enter string 3: ";
    cin >> st3;
    cout << "***************" << endl;
    cout << "Length of string 1 is " << st1.length() << endl;
    cout << "Contact: " << st2 + st3 << endl;
    cout << st2 << " * " << st3 << " = " << stof(st2) * stof(st3);

    return 0;
}