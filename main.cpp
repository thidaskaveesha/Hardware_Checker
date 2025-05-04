#include <iostream>
// include funcion files.
#include "linuxHardware.cpp"
#include "windowsHardware.cpp"
using namespace std;

int main() {
    cout << " ===========================Hardware Checker==================== " << endl;
    cout << "================================================================" << endl;
    cout << "This program is designed to check the hardware of your computer." << endl;


    // Use preprocessor directives to detect the operating system at compile time
    #if defined(_WIN32) || defined(_WIN64)
        cout << "Running on Windows..." << endl;
        windowsFanSpeed();
    // #elif defined(__linux__)
    //     cout << "Running on Linux..." << endl;
    //     linuxFanSpeed();
    #else
        cerr << "Unsupported operating system!" << endl;
    #endif

    // exit from the the system
    cout << "Waiting for your input to exit......" << endl;
    cin.get(); 
    return 0;
}