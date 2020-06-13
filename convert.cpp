#include <iostream>

using namespace std; // affect all functions in this file

int stonetolb(int);

// MAIN
int main(void)
{

    int stone;
    cout << "Enter the weight in stone:" << endl;
    cin >> stone;
    cout << "Equivalent weight in lb: " << stonetolb(stone) << " pounds" << endl;
    return 0;
}

// Convert weight in stone to weight in lb
int stonetolb(int sts)
{
    return 14 * sts;
}