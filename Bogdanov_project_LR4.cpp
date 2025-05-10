#include <iostream>
using namespace std;

void inputA(int& a) {
    do {
        cout << "Введите положительное число A: ";
        cin >> a;
        if (a <= 0) {
            cout << "Число должно быть положительным! Попробуйте снова.\n";
        }
    } while (a <= 0);
}

void inputB(int& b) {
    do {
        cout << "Введите положительное число B: ";
        cin >> b;
        if (b <= 0) {
            cout << "Число должно быть положительным! Попробуйте снова.\n";
        }
    } while (b <= 0);
}

void calculateArea(int a, int b) {

}

void calculatePerimeter(int a, int b) {

}

int main() {
    int a = 0, b = 0;
    int choice;

    while (true) {
        cout << "\nМеню:\n";
        cout << "1. Ввести положительное число A\n";
        cout << "2. Ввести положительное число B\n";
        cout << "3. Найти площадь прямоугольника\n";
        cout << "4. Найти периметр прямоугольника\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputA(a);
                break;
            case 2:
                inputB(b);
                break;
            case 3:
                calculateArea(a, b);
                break;
            case 4:
                calculatePerimeter(a, b);
                break;
            case 0:
                return 0;
            default:
                cout << "Неверный выбор! Попробуйте снова.\n";
        }
    }
}