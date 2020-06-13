#include <iostream>

void simon(int); // function prototype

int main(void)
{
    using namespace std;
    cout << "How many times should Simon say something?" << endl;
    int count;
    cin >> count;
    simon(count);
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Simon says 'touch our toes' " << n << " times." << endl;
}