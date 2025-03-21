// 10. Explain the difference between x++ and ++x in your own words.
// • Take an integer as input and:
// • Print its value using post-increment (x++).
// • Print its value again using pre-increment (++x)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<endl<<"Enter the input"<<endl;
    cin>>n; // if ex-> 10 input
    cout<<"Post-increment: "<<n++<<endl; // ex-> 10 output print then after 11
    cout<<"Pre-increment: "<<++n<<endl; // ex-> 12 output print
    return 0;
}