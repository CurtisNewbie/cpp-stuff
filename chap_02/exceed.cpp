#include <climits>
#include <iostream>

#define ZERO 0

using namespace std;

int main()
{
    short sam = SHRT_MAX; // this will overflow if it ++;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl
         << "Now ";
    ++sam;
    ++sue;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl
         << endl;

    sam = sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Withdraw $1 from each account." << endl
         << "Now ";
    --sam; // overflow again if it --
    --sue;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nLucky Sue!" << endl;
}