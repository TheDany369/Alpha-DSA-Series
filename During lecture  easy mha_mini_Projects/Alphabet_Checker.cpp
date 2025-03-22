/* The in class tasks */

#include <bits/stdc++.h>
using namespace std;
void Alphabet_check(int c)
{
    if(( (65<=c) && (90<='Z')) || ((97<=c) && (c<=122))){
        cout<<"Your Input is surely a Alphabet"<<endl;
    }else{
        cout<<"Invalid input, Please Enter valid input"<<endl;
    }
}
int main()
{
    char ch;
    cout<<"---------:Welcome to Alphabet Checker System:---------";
    cout<<"\nEnter any character input section please\n";
    cin>>ch;
    Alphabet_check(ch);
    return 0;
}