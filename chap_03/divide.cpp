#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point

    // this example also shows Operator Overloading
    // e.g.,
    // int / int
    // double / double
    // float / float
    // long / long
    cout << "Integer division: 9 / 5 = " << 9 / 5 << endl;
    cout << "Floating-point division: 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0 / 5 = " << 9.0 / 5 << endl;
    cout << "double constants: 1e7 / 9.0 = " << 1e7 / 9.0 << endl;
    cout << "float constants: 1e7f / 9.0f = " << 1e7f / 9.0f << endl;

    return 0;
}