// C++ Bootcamp Assignment-27 Question-1 :-

// Header Files
#include <conio.h>
#include <iostream>

// Add Namespace
using namespace std;

// Define Class Complex
class Complex
{
    int real;
    int imag;

public:
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    void showData()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(Complex temp)
    {
        temp.real = real + temp.real;
        temp.imag = imag + temp.imag;
        return temp;
    }

    Complex operator-(Complex temp)
    {
        temp.real = real - temp.real;
        temp.imag = imag - temp.imag;
        return temp;
    }

    Complex operator*(Complex temp)
    {
        temp.real = real * temp.real;
        temp.imag = imag * temp.imag;
        return temp;
    }

    bool operator==(Complex temp)
    {
        return (real == temp.real && imag == temp.imag);
    }
};

// Main Function Start
int main()
{

    /*1. Define a class Complex with appropriate instance variables and member functions.
        Define following operators in the class:
        a. +
        b. -
        c. *
        d. ==
    */

    Complex c1, c2, c3;
    c1.setData(2, 6);
    cout << "\nFirst Complex Number => ";
    c1.showData();
    c2.setData(3, 8);
    cout << "\nSecond Complex Number => ";
    c2.showData();
    c3 = c1 + c2;
    cout << "\nSum of First and Second Complex Numbers => ";
    c3.showData();
    c3 = c1 - c2;
    cout << "\nSubtraction of First and Second Complex Numbers => ";
    c3.showData();
    c3 = c1 * c2;
    cout << "\nProduct of First and Second Complex Numbers => ";
    c3.showData();
    if (c1 == c2)
        cout << "\nFirst and Second Complex Numbers Are Equal";
    else
        cout << "\nFirst and Second Complex Numbers Are Equal";

    getch();
    return 0;
}
// Main Function End