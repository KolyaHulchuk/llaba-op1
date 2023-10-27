#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;
int main() {
    double a, b, c;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    std::cout << "Введіть довжину сторони a: ";
    std::cin >> a;

    std::cout << "Введіть довжину сторони b: ";
    std::cin >> b;

    std::cout << "Введіть довжину сторони c: ";
    std::cin >> c;

    
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    std::cout << "Площа трикутника: " << area << std::endl;

    
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        std::cout << "Трикутник є прямокутним." << std::endl;
    }
    else {
        std::cout << "Трикутник не є прямокутним." << std::endl;
    }

    return 0;
}