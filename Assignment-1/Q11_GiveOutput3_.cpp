// Give Output:
// int a = 3, b = 5, c;
// c = a++ + ++b;
// cout<<a<<b<<" "<<c; 


#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 3, b = 5, c;
    c = a++ + ++b; // c= 3+6 = 9
    cout<<a<<b<<" "<<c; // a = 4, b=6, c=9
    return 0;
}