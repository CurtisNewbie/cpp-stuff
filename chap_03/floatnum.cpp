#include <iostream>

using namespace std;

int main()
{
    // override cout's default behaviour
    // by default it only prints the non-null decimal points
    // but we want extra decimal points
    // however, cout can only prints up to 6 decimal points
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6; // 1 * 10^5

    cout << "tub = " << tub;
    cout << "\na million tubs = " << million * tub;
    cout << "\nten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "\nmint = " << mint;
    cout << "\na milllion mints = " << million * mint;
    cout << "\nten million mints = " << 10 * million * mint << endl;
    return 0;
}