﻿// Project22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Money.h"
#include<Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Money amount1, amount2, result;

    std::cout << "Введіть першу суму:\n";
    amount1.Read();

    std::cout << "Введіть другу суму:\n";
    amount2.Read();

    // Додавання
    result = amount1 + amount2;
    std::cout << "Сума: " << result.toString() << std::endl;

    // Віднімання
    result = amount1 - amount2;
    std::cout << "Різниця: " << result.toString() << std::endl;

    // Порівняння
    if (amount1 < amount2) {
        std::cout << "Сума 1 менша за суму 2\n";
    }
    else {
        std::cout << "Сума 1 більша або дорівнює сумі 2\n";
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
