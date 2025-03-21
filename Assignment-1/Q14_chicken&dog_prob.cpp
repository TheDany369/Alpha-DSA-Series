/* 14. Write a program that will tell the number of dogs and chicken are there when the
user will provide the value of total heads and legs.
For example:
Input: heads -> 4 legs -> 12
Output: dogs -> 2 chicken -> 2 */

#include <iostream>
using namespace std;

void doken()
{
    int h, l;
    cout << "\nEnter the number of Heads: ";
    cin >> h;
    cout << "\nEnter the number of Legs: ";
    cin >> l;

    // Using the equations:
    // Let c = number of chickens
    // Let d = number of dogs
    // We have:
    // c + d = h (1)  (total heads)
    // 2c + 4d = l (2) (total legs)

    // From (1): c = h - d
    // Substitute c in (2):
    // 2(h - d) + 4d = l
    // 2h - 2d + 4d = l
    // 2h + 2d = l
    // 2d = l - 2h
    // d = (l - 2h) / 2
    // c = h - d

    int d = (l - 2 * h) / 2; // Calculated number of dogs
    int c = h - d;           // Calculated number of chickens

    cout << endl
         << "The number of dogs: " << d << endl;
    cout << "The number of chickens: " << c << endl;
}

int main()
{
    doken();
    return 0;
}