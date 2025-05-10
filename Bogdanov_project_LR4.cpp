#include <iostream>
using namespace std;

void inputA(int& a) {

}

void inputB(int& b) {

}

void calculateArea(int a, int b) {
    if (a <= 0 || b <= 0) {
        cout << "Ошибка: A и B должны быть положительными числами!\n";
        return;
    }
    cout << "Площадь прямоугольника: " << a * b << endl;
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