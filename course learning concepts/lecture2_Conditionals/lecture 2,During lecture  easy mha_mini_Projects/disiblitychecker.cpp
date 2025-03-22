                                                 /* The in class tasks */ 

/*
This is the disiblity checker program
In this program client can make a easy CUI Based disiblity checker Maker the no. in which he just have to enter 2 no at the starting of the program 
and From that Disiblity checker the sub user can enter the positive no. and the program will check the disiblity of that no.
*/

#include <bits/stdc++.h>
using namespace std;
void disib_check(int num, int n1, int n2)
{
    if (num % n1 == 0 && num % n2 == 0)
    {
        cout << "The number is divisible by both " << n1 << " and " << n2 << endl;
    }else if (num % n1 == 0 && num % n2 != 0)
    {
        cout << "The number is divisible by" << n1 << " but not " << n2 << endl;
    }
    else
    {
        cout << "The number is divisible by " << n2 << " but not " << n1 << endl;
    }
}
int main()
{
    int num, n1, n2;
    cout << "Enter the 2 no. from which you want to check the disbility of future inputs" << endl;
    cin >> n1 >> n2;
    cout << "Congrats,Your divisiblity checker is ready" << endl;
    cout << endl<< "Ok now \nEnter one positive input no" << endl;
    cin >> num;
    disib_check(num, n1, n2);
    return 0;
}