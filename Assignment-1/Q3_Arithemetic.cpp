// Arithemetic calculation

#include<bits/stdc++.h>
using namespace std;
void ar(int a, int b){
    int add = a+b;
    int sub = a-b;
    int mul = a*b;
    int div = a/b;
    cout<<endl<<"The Addition ="<<add;
    cout<<endl<<"The Subtraction ="<<sub;
    cout<<endl<<"The Multiplication ="<<mul;
    cout<<endl<<"The Division ="<<div;
}
int main(){
    int n1,n2;
    cout<<endl<<"Enter the 2 no"<<endl;
    cin>>n1>>n2;
    ar(n1,n2);
    return 0;
}