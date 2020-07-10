#include <iostream>

using namespace std;

int main(void)
{

    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter you weight in points: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " pounds are " << stone;
    cout << " stone, " << pounds << " pound(s)." << endl;
    return 0;
}