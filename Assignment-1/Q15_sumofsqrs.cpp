// 15. Write a program to find the sum of squares of first n natural numbers where n
// will be provided by the user.

#include<bits/stdc++.h>
using namespace std;
int ssum(int n, int sum){
    for(int i=1;i<=n;i++){
        sum = sum+(i*i);
    }
    return sum;
}
int main(){
    int sum = 0, n;
    cout<<"Enter the range of numbers"<<endl;
    cin>>n;
    cout<<"The sum: "<<ssum(n,sum);
    return 0;
}