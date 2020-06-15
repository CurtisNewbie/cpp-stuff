#include <climits>
#include <iostream>

using namespace std;

int main()
{
    // to solve the inconsistent definition of how long the data types should be, use climits or limits.h
    // to figure out their maximum values in runtime
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LONG_LONG_MAX;

    char unitStr[] = " bytes.";

    // or we can use sizeof, which also achieves the same thing, except that we are getting the number of
    // bytes for the variables or type, instead of their max/min values
    // sizeof( __ ) for type, and sizeof __ for variable
    cout << "int is " << sizeof(int) << unitStr << endl;
    cout << "short is " << sizeof n_short << unitStr << endl;
    cout << "long is " << sizeof n_long << unitStr << endl;
    cout << "long long is " << sizeof n_llong << unitStr << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl
         << endl;

    cout << "Minimum int value: " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}