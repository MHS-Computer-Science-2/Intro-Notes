// CS2 Day 1 Notes.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
I CAN perform input and output using cin and cout
I CAN create and use variables including int, double, and string
I CAN use basic math computations to solve problems
I CAN explain the purpose of a semicolon in C++
*/


#include <iostream> //Adds basic input and output functionality (cin/cout)

using namespace std; //so we don't have to type std:: in front of everything

int main()
{
    //COUT means Console OUTput
    cout << "Hello World!" << endl; //endl means go to the next line

    //Changing the console color
    system("color 1F"); //1 = blue background, F = white text

    //Making variables
    string str = "potty pete";
    int length = 5, width = 7;  
 
    //Simple computation and output
    int area = length * width;
    cout << "Area: " << area << endl;

    int perimeter = 2 * length + 2 * width;
    cout << "Perimeter: " << perimeter << endl;

    //Semi-colons are like the periods at the end of a sentence.
    //This frees us from having exactly one statement on every line.

    //CIN means Console INput 
    double base, height, triarea;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height; //Will not continue until user enters two values

    triarea = (base * height) / 2;
    cout << "Triangle Area: " << triarea << endl;

    system("pause");
}
