#include <iostream>
#include <fstream>

void linuxFanSpeed() {
    std::ifstream fanSpeedFile("/sys/class/hwmon/hwmon0/fan1_input");
    if (!fanSpeedFile.is_open()) {
        std::cerr << "Could not open fan speed file. Ensure correct permissions and file path." << std::endl;
        return;
    }

    int fanSpeed;
    fanSpeedFile >> fanSpeed;
    std::cout << "Fan Speed: " << fanSpeed << " RPM" << std::endl;

    fanSpeedFile.close();
}
