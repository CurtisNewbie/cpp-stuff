
#include <iostream>

// using namespace std; // this time, we don't use namespace

int main()
{
    int chest = 42;
    int waist = 42; // will be in hex
    int inseam = 42; // will be in octal

    // we can use operator to display decimal numbers in hex or octal
    std::cout << "Monsieur cuts a striking figure!\n";
    std::cout << "chest = " << chest << " (42 in decimal)\n";
    // the hex operator converts the following var to hex
    std::cout << "waist = " << std::hex << waist << " (0x42 in hex)\n";
    // the oct operator converts the following var to oct
    std::cout << "inseam = " << std::oct << inseam << " (042 in octal)\n";
    return 0;
}