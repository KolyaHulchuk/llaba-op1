#include <iostream>
#include <iomanip>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int birthdayDecimal = 22; 

  
    int birthdayOctal = 022; // 025 восьмерично = 21 десятково

    
    int birthdayHex = 0x22; // 0x15 шістнадцятирічно = 21 десятково

    
    const char* message = "Мій день народження: ";

    
    std::cout << message << birthdayDecimal << std::endl;
    std::cout << message << std::oct << birthdayOctal << std::endl;
    std::cout << message << std::hex << birthdayHex << std::endl;

    return 0;
}
