﻿// klass5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "ggg.h"

int main()
{
    double** s;
    
    int a, b;
    cout << "\nzadanie 1\n";
    cout << "vvedite razmer massiva\na = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
     s=sozm(a,  b);
     zapm( a,  b,  s);
     coutm( a,  b,  s);
     delm( a,  b,  s);
     cout << "\nzadanie 2\n";
     s = sozm(1, 12);
     zapm(1, 12, s);
     coutm(1, 12, s);
     obmenm(0, 12, s);
     coutm(1, 12, s);
     delm(1, 12, s);
     cout << "\nzadanie 3\n";
     cout << "vvedite razmer massiva\na = ";
     cin >> a;
     cout << "\nb = ";
     cin >> b;
     s = sozm(a, b);
     mzapm(a, b, s);
     coutm(a, b, s);
     delm(a, b, s);
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
