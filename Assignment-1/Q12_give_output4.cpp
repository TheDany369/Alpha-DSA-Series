// Give Output:

// int x=4 y=2 z;
// z=x++ * --y + ++x; 
// cout<<x<<" "<<y<<" "<<z;


// ---- generally it give an error because of not having commas to differ variables but after having all format correct the output is bellow ¥ ----
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=4, y=2,z;
    z=x++ * --y + ++x; //  z= 4*1+6 =10 ayega output
    cout<<x<<" "<<y<<" "<<z; // x=6  y=1  z=10
    return 0;
}