#include <iostream>

using namespace std;

int main()
{
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character: " << endl;
    ch++;
    cout << "It is now: '" << ch << "' and it's code is " << (int)ch << endl;

    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('\n');

    cout << "Using cout.put() to display a char constant: ";
    cout.put('!');
    cout << endl
         << "Done" << endl;
    return 0;
}