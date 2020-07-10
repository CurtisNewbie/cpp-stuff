#include <iostream>

using namespace std;

int main()
{
    int auks, bats, coots;
    // double + double => cast to => int
    auks = 19.99 + 11.99;

    // cast first then addition
    bats = (int)19.99 + (int)11.99;

    // different syntax, cast first then addition
    coots = int(19.99) + int(11.99);

    cout << "auks = " << auks << endl;
    cout << "bats = " << bats << endl;
    cout << "coots = " << coots << endl;

    char ch = 'Z';
    cout << "ch = " << ch << endl; // print as char
    cout << "ch = " << (short)ch << endl; // print as short
    cout << "ch = " << (int)ch << endl; // print as int
    cout << "ch = " << static_cast<int>(ch) << endl; // static_cast<>() to int
    return 0;
}