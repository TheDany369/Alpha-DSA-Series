// Area of rectangle
#include<bits/stdc++.h>
using namespace std;
void a_of_rec(int l, int b){
    int area = l*b;
    cout<<"The Area of Rectangle is: "<<area;
}
int main(){
    int l,b;
    cout<<"Enter the length and bredth of rectangle:--";
    cin>>l>>b;
    a_of_rec(l,b);
    return 0;
}