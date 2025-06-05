#include <iostream>
#include <cstdlib>
#include "layout.hpp"
using namespace std;
char startM;

int main()
{
    // Create project...
    system("clear");
    cout << "[Simple Project Manager v0.1]\n\n";
    cout << "[1] Start\n";
    cout << "[2] Setup\n";
    cout << "[X] Close\n";
    cout << "Choice... ";
    cin >> startM;
    switch(startM)
    {
        case('1'):
            main_app(); // Main program.
            break;
        case('2'):
            prgrm_Setup(); // Experimental.
            break;
        case('X' || 'x'):
            exit(0); // Safely exits the program.
        default:
            cerr << "Invalid Input, please select a valid character.";
            break;
    }
}