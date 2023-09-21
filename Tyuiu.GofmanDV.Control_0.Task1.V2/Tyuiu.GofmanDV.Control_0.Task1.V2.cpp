// Tyuiu.GofmanDV.Control_0.Task1.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cmath"
#include "math.h"
#include "../Tyuiu.GofmanDV.Control_0.Task1.V2.Lib/Tyuiu.GofmanDV.Control_0.Task1.V2.Lib.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    ISprint0Task8V4* data = new Service();
    cout << "¬ведите число x\n";
    float x;
    cin >> x;
    cout << "¬ведите число z\n";
    float z;
    cin >> z;
    float result;
    result = data->Proizved(x, z);
    cout << result;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
