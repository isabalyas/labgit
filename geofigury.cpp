#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

// Функция для вычисления параметров прямоугольника
void calculateRectangle(double width, double height) {
    // Проверка на корректность входных данных
    if (width <= 0 || height <= 0) {
        throw invalid_argument("Стороны прямоугольника должны быть положительными числами");
    }

    // Вычисление параметров
    double perimeter = 2 * (width + height);
    double area = width * height;
    double diagonal = sqrt(width * width + height * height);

    // Вывод результатов
    cout << "Параметры прямоугольника:" << endl;
    cout << "Ширина: " << width << endl;
    cout << "Высота: " << height << endl;
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Длина диагонали: " << diagonal << endl;
}

int main() {
    try {
        // Пример использования
        cout << "Введите ширину и высоту прямоугольника: ";
        double width, height;
        cin >> width >> height;

        calculateRectangle(width, height);

    } catch (const exception& e) {
        cerr << "Ошибка: " << e.what() << endl;
        return 1;
    }

    return 0;
}