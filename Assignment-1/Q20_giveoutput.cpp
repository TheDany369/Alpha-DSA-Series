#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 5, y =3;
    cout<<(x&y)<<" "<<(x&&y);// & is a bitwise AND 5= 0101 , 3= 0011 ===> 0101 + 0011 = 1000and &&- is a  logical AND operator except 0 all are true =1
    return 0;
}