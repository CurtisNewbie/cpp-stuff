#include <iostream>

using namespace std;

int main()
{
    // 2.34E+22 is a number using E notation, and f indicates that it's a float type
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    // b is suppsed to be 1.0f, since we added 1.0f above
    // but because of float's precision problem, it's not actually affected
    cout << "b - a = " << b - a << endl;
    return 0;
}