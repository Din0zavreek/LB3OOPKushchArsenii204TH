#include <iostream>
#include <windows.h>
#include "Bank.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    cout << "--- Демонстрація Конструкторів ---" << endl;

    Money m1;
    cout << "m1 (створений за замовчуванням): ";
    m1.Display();

    Money m2(10, 5, 2, 1, 0, 3, 1, 4, 2, 1);
    cout << "m2 (створений конструктором з параметрами): ";
    m2.Display();

    Money m3(m2);
    cout << "m3 (копія m2): ";
    m3.Display();

    cout << "\n--- Ввід данних через Read() ---" << endl;
    m1.Read();
    cout << "Оновлений m1: ";
    m1.Display();

    cout << "\n--- Виконання операцій ---" << endl;
    Money sum = m1.add(m2);
    cout << "m1 + m2 = ";
    sum.Display();

    Money diff = m1.subtract(m2);
    cout << "m1 - m2 = ";
    diff.Display();

    double div = m1.divide(m2);
    cout << "Ділення(m1/m2): " << div << endl << endl;

    double divFactor;
    cout << "Введіть дробове число для ділення першої суми: ";
    cin >> divFactor;
    cout << endl;
    Money divResult = m1.divideDouble(divFactor);
    cout << "Ділення (m1) на дробове число: ";
    divResult.Display();
    cout << endl;

    double mulFactor;
    cout << "Введіть дробове число для множення першої суми: ";
    cin >> mulFactor;
    cout << endl;
    Money mulResult = m1.multiplyDouble(mulFactor);
    cout << "Множення (m1) на дробове число: ";
    mulResult.Display();
    cout << endl;

    cout << "Результати порівняння " << endl << endl;


    if (m1.Equal(m2)) {
        cout << "Суми рівні." << endl;
    }
    if (m1.NotEqual(m2)) {
        cout << "Суми не рівні." << endl;
    }
    if (m1.Greater(m2)) {
        cout << "Перша сума більша за другу суму." << endl;
    }
    if (m1.Less(m2)) {
        cout << "Перша сума менша за другу суму." << endl;
    }

    return 0;
}