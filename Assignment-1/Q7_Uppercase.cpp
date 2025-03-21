// Take a integer b/w 65 and 90 as input and print its corresponding uppercase letter

#include<bits/stdc++.h>
using namespace std;

char upp(int n){
    return (char)n;
}
int main(){
    int n;
    cout<<"Enter the ascii no b/w 65 to 90 for its corresponding uppercase letter:- \n";
    cin>>n;
    cout<<"The upper case letter of your choosen ascii no is:--  "<<upp(n);
    return 0;
}