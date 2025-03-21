/* 16. Given 2 fractions, find the sum of those 2 fractions.Take the numerator and
denominator values of the fractions from the user.*/

#include<bits/stdc++.h>
using namespace std;
float sum(int n1, int d1, int n2, int d2){
    int s = (n1/d2)+(n2/d2);
    return s;
}
int main(){
    int num1, num2, deno1, deno2;
    cout<<endl<<"Enter the 2 fraction by giving Numerator and Denominator";
    cout<<endl<<"Enter the 1st fraction input";
    cin>>num1>>deno1;
    cout<<endl<<"Enter the 2nd fraction input";
    cin>>num2>>deno2;
    cout<<endl<<sum(num1,deno1,num2,deno2);
    return 0;
}