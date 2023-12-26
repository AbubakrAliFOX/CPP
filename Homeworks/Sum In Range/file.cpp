#include <iostream>
using namespace std;

struct Range
{
    int From;
    int To;
};


Range ReadRange (){
    Range NewRange;
    cout << "*****************************" << endl;
    cout << "Print Begin: " << endl;
    cin >> NewRange.From;

    cout << "Print End: " << endl;
    cin >> NewRange.To;
    cout << "*****************************" << endl;

    return NewRange;
}

void PrintNumbersInRange (Range NewRange) {
    for (int i = NewRange.From; i <= NewRange.To; i++) {
        if (i % 2 == 0) {
            cout << i << endl; 
        }
    }
}

int main()
{
    PrintNumbersInRange( ReadRange());
    return 0;
}