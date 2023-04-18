#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; // количество вершин
    double x, y; // координаты вершин
    double area = 0; // площадь многоугольника
    cin >> n; // ввод количества вершин
    double* x_coords = new double[n]; // динамический массив для хранения координат x
    double* y_coords = new double[n]; // динамический массив для хранения координат y
    for (int i = 0; i < n; i++) {
        cin >> x >> y; // ввод координат вершин
        x_coords[i] = x;
        y_coords[i] = y;
    }
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n; // следующая вершина
        area += x_coords[i] * y_coords[j] - y_coords[i] * x_coords[j]; // формула площади многоугольника
    }
    area = abs(area) / 2; // модуль площади
    cout << "Площадь многоугольника: " << area << endl;
    delete[] x_coords; // освобождение памяти
    delete[] y_coords;
    return 0;
}
