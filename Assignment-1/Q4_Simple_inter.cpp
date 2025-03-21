// Simple interest

#include<bits/stdc++.h>
using namespace std;
void si(int a, int b, int c){
    int S_I = (a*b*c)/100;
    cout<<"The Simple interest: "<<S_I;
}
int main(){
    int p,r,t;
    cout<<"Enter the Principle, Rate, and Time";
    cin>>p>>r>>t;
    si(p,r,t);
    return 0;
}