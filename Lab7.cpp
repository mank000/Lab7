﻿// Lab7
#include <iostream>
#include <clocale>
#include "solution2.cpp" 
using namespace std;

//Написать функцию f(a,b,с), вычисляющую и возвращающую количество корней квадратного уравнения с коэффициентами a, b и с.

//С использованием return.
int f(int a, int b, int c) {
    double discr = (((b * b) - (4 * a * c)));
    if (discr > 0) {
        return 2;
    }
    else if (discr == 0) {
        return 1;
    }
    return 0;
}

// С использованием указателей.
void f_1(int a, int b, int c, int* roots) {
    float discr = (((b * b) - (4 * a * c)));
    if (discr > 0) {
        *roots = 2;
    }
    else if (discr == 0) {
        *roots = 1;
    }
    else {
        *roots = 0;
    }
}

// С использованием ссылок.
void f_2(int a, int b, int c, int& roots) {
    float discr = (((b * b) - (4 * a * c)));
    if (discr > 0) {
        roots = 2;
    }
    else if (discr == 0) {
        roots = 1;
    }
    else {
        roots = 0;
    }
}

int main()
{   
    setlocale(LC_ALL, "ru");
    srand(time(0)); //seed for random generator
    int userch;
    cout << "1 solution or 2 solution?";
    cin >> userch;
    if (userch == 1) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << "Количество корней(с использованием return): " << f(a, b, c) << endl;
        // Указатель вызовет функцию на которую и ссылается.
        int rootsPoint;
        f_1(a, b, c, &rootsPoint);
        cout << "Количество корней(с использованием указателя): " << rootsPoint << endl;
        int rootsRef;
        f_2(a, b, c, rootsRef);
        cout << "Количество корней(с использованием ссылки): " << rootsRef << endl;
    }
    else if (userch == 2) {
        solution2_return();
        solution2_ref();
        solution2_poin();
    }
    else {
        cerr << "непонятное число";
        return 1;
    }   
}

