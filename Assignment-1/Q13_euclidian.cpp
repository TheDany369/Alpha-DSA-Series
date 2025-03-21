// 13. Write a program to find the euclidean distance between two coordinates.Take both the coordinates from the user as input.


#include<bits/stdc++.h>
using namespace std;

double eclu(int x1, int x2, int y1, int y2){
    int dist = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
    return (dist);
}
int main(){
    int x1,x2,y1,y2;
    cout<<endl<<"Enter the x and y coordinates of both the points of the end points of distance"<<endl;
    cout<<endl<<"Enter the starting points coordinate"<<endl;
    cin>>x1>>y1;
    cout<<endl<<"Enter the starting points coordinate"<<endl;
    cin>>x2>>y2;
    cout<<endl<<eclu(x1,x2,y1,y2)<<endl;
    return 0;
}