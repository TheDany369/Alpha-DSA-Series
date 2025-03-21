// Give Output:
// int main(){
//     int a=4;
//     int b=5;
//     a++, b-;
//     cout<<++a<<" "<<b--;
//     return 0;
// }

// ---- it will give error but removing issue -----

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=4;
    int b=5;
    a++, b--; // 5 4
    cout<<++a<<" "<<b--; // 6  4
    return 0;
}