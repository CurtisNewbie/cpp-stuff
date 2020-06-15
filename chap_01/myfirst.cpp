#include <iostream>

int main()
{
    using namespace std; // make definitions in "std" visible, the method below is essentially std::coul and std::cin
    cout << "Come Up and C++ me some time."; // cout is std output
    cout << endl; // new line
    cout << "You won't regret it!" << endl;
    // "<<" is an operator, it is for transferring strings, i.e., a stream of string from one to another
    return 0; // if main method is finished without any error, it will return 0 even when this statement doesn't exists
}