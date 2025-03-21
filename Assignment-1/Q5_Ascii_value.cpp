// Take Character as input and give its corresponding ascii value

#include<bits/stdc++.h>
using namespace std;
int ascii(char ch){
    return (int)ch;
}
int main(){
    char ch;
    cout<<"Enter the character whos ascii value you want--";
    cin>>ch;
    cout<<ascii(ch);
    return 0;
}