#include <iostream>

using namespace std;

int main(void)
{
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    // \b means backspace, it moves cursor backword, without deleting
    // the underscore, such that the user may feel like they are typing over the underscores
    cout << "Enter your agent code:_________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    return 0;
}