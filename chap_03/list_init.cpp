#include <climits>
#include <iostream>

using namespace std;

int main(void)
{
    // list initialisation doesn't allow narrowing
    const int code = 66;
    int x = 66;

    char c1 { 31325 }; // narrowing, not allowed because 31325 > CHAR_MAX, fail to compile
    char c2 = { 66 }; // allowed, as char can hold 66
    char c3 { code }; // allowed, as char can hold 66
    char c4 = { x }; // narrowing, not allowed, x is int, fail to compile
    x = 31325;
    char c5 = x; // allowed, but c5 won't be 31325, overflows

    cout << "Max size of char: " << CHAR_MAX << endl;
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c3: " << c3 << endl;
    cout << "c4: " << c4 << endl;
    cout << "c5: " << c5 << endl;
    cout << "(int) c5: " << (int)c5 << endl;

    return 0;
}