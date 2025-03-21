#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5, b=10, c=15;
    bool result = a<b && b<c || c==10;  // 1&&1 = 1 both true and 1||0 = 1 one should be true
    cout<<result; // 1
    return 0;
}