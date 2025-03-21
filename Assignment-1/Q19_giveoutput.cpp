#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10,b=5,c;
    c=a+=b-=2; // b = b - 2 = 5 - 2 = 3 .......... a = a + b = 10 + 3 ==> 13........
    cout<<a<<" "<<b; // 13 and 3
    return 0;
}