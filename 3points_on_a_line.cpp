// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <iostream>
using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3, s1, s2;
    cout << "enter the value of x1 and y1: ";
    cin >> x1 >> y1;
    cout << "enter the value of x2 and y2: ";
    cin >> x2 >> y2;
    cout << "enter the value of x3 and y3: ";
    cin >> x3 >> y3;
    
    s1 = (y2 - y1) / (x2 - x1);
    s2 = (y3 - y2) / (x3 - x2);
    
    if (s1 == s2)
    {
        cout << "All 3 points lie on the same line";
    }
    else
    {
        cout << "All 3 points do not lie on the same line";
    }
}