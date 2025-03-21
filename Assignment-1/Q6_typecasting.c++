// Take a Floating no as a input, and typecast it into an integer, and print both values

#include<bits/stdc++.h>
using namespace std;
int typecast(float n){
    return (int)n;
}
int main(){
    float n;
    cout<<"Enter the decimal value to typecast----"<<endl;
    cin>>n;
    cout<<endl<<"Before Typecast:--  "<<n<<endl;
    cout<<endl<<"After Typecast:--  "<<typecast(n);
}