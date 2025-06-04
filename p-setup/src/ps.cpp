#include <iostream>
#include <cstdlib>
#include "layout.hpp"
using namespace std;
char startM;

int main()
{
    // Create project...
    cout << "[Simple Project Manager v0.1]\n\n";
    cout << "[1] Start\n";
    //cout << "[2] Debug\n";
    cout << "[X] Close\n";
    cout << "Choice... ";
    cin >> startM;
    switch(startM)
    {
        case('1'):
            main_app();
            break;
        /*case('2'):
            dMode();
            break;*/
        case('X'):
            exit(0);
        default:
            cerr << "Invalid Input, please select a valid character.";
            break;
    }
}