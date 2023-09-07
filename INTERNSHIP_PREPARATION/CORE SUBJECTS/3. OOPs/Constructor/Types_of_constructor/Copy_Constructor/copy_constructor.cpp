#include <bits/stdc++.h>
using namespace std;
class Smartphone{

    public :
    string ModelName;
    int ModelNumber;
    bool Five_g_supported;

    // Default constructor are those constructor which do not have any parameters
    Smartphone(string val1,int val2){
        ModelName=val1;
        ModelNumber=val2;
        Five_g_supported=false;
    }

    Smartphone( Smartphone & S){
        ModelName=S.ModelName;
        ModelNumber=S.ModelNumber;
        Five_g_supported=S.Five_g_supported;
    }
};

int main(){

    Smartphone Nokia("iPhone",22);

    cout<<"Nokia => ";
    cout<<"Model Name : "<<Nokia.ModelName<<endl;
    cout<<"Model Number : "<<Nokia.ModelNumber<<endl;
    cout<<" 5g Supported ? : "<<Nokia.Five_g_supported<<endl;

    Smartphone Nokia2(Nokia);
    
    cout<<"Nokia2  =>  "<<endl;
    cout<<"Model Name : "<<Nokia.ModelName<<endl;
    cout<<"Model Number : "<<Nokia.ModelNumber<<endl;
    cout<<" 5g Supported ? : "<<Nokia.Five_g_supported<<endl;
    return 0;
}

