                                    /* The in class tasks */


// cp and sp lena hai 
// then prof or loss 
// and p to kitta and l to kitta 

#include<bits/stdc++.h>
using namespace std;
void porl_calculator(int cp, int sp){
    if(cp>sp){
        cout<<"Loss of "<<cp-sp<<endl;
    }
    else if(sp>cp){
        cout<<"Profit of "<<sp-cp<<endl;
    }
    else{
        cout<<"No profit no loss"<<endl;
    }
}
int main(){
    int cp ,sp;
    cout<<"Enter the cost price and then selling price: "<<endl;
    cin>>cp>>sp;
    porl_calculator(cp,sp);
    return 0;
}