#include <iostream>
#include <Windows.h>

using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double number;
    int integerCount = 0;
    int decimalCount = 0;

    std::cout << "Введіть дійсні числа (для завершення введіть 100):" << std::endl;

    while (true) {
        std::cin >> number;

        if (number == 100) {
            break;  // Виходимо з циклу при введенні числа 100
        }

        if (number == static_cast<int>(number)) {
            integerCount++;
        }
        else {
            decimalCount++;
        }
    }

    std::cout << "Кількість цілих чисел: " << integerCount << std::endl;
    std::cout << "Кількість чисел з десятковою комою: " << decimalCount << std::endl;

    return 0;
} 