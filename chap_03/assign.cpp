#include <iostream>

using namespace std;

int main(void)
{

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-points

    // int to float
    float tree = 3;
    // convert double to int, literal floating pointer number is by default double
    int guess(3.9832);
    // convert double to int, cpp attempts to remove all decimal points, but resulting
    // number overflows, so the result is undefined
    int debt = 7.2E12;

    cout << "tree: " << tree << endl;
    cout << "guess: " << guess << endl;
    cout << "debt: " << debt << endl;

    return 0;
}
