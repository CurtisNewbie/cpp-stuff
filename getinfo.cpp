#include <iostream>

int main(void)
{
    using namespace std;

    int carrots;
    cout << "How Many carrots do you have?" << endl;
    cin >> carrots; // >> refers to inputstream that flows into carrots, note that "carrots << cin" is illegal
    cout << "Here are two more. " << endl;
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}
