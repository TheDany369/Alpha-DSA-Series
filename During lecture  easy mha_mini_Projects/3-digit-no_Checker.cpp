/* The in class tasks */

#include <bits/stdc++.h>
using namespace std;
void no_Checker(int n)
{
    if ((n > 99) && n < 1000)
    {
        cout << "The no is a 3-digit positive no" << endl;
    }
    else
    {
        cout << "The no is not a 3-digit positive no" << endl;
    }
}
int main()
{
    int num;
    cout << "Enter the positive no" << endl;
    cin >> num;
    no_Checker(num);
    return 0;
}