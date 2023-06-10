// SquareRootEquation.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ( Ratnik )

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;


int main()
{
    std::cout << "Square root equation solver by Peter\n";

    float a, b, c;

    cout << "Enter A variable: ";
    cin >> a;

    cout << "Enter B variable: ";
    cin >> b;

    cout << "Enter C variable: ";
    cin >> c;

    std::cout << "A : " << a << " B : " << b << " C : " << c << endl;

    float d;

    d = b * b - 4 * a * c;
    std::cout << "D : " << d << endl;

    if (d > 0)
    {

        float first, second;

        first = (-b + sqrt(d)) / (2 * a);
        second = (-b - sqrt(d)) / (2 * a);
      //  std::cout << -b + sqrt(d) << endl;

        std::cout << "x(first) = " << first << endl;
        std::cout << "x(second) = " << second << endl;

    }
    else if (d == 0)
    {
        float first;
        first = -b / (2 * a);
        std::cout << "x(first) = " << first << endl;




    }
    else
    {
        std::cout << "Since D is lower than 0, there are no possible roots";
    }

    cout << "";
    cin >> b;
}

