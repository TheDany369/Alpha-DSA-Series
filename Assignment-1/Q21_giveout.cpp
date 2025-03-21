#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 6, b = 3;
    a += b *=2;     // b = 6 and a = a+6=12
    cout<<a<<" "<<b; // 12 and 6 is the output answer
    return 0;
}