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


};

int main(){

    Smartphone Nokia("iPhone",22);
    cout<<"Model Name : "<<Nokia.ModelName<<endl;
    cout<<"Model Number : "<<Nokia.ModelNumber<<endl;
    cout<<" 5g Supported ? : "<<Nokia.Five_g_supported<<endl;

    
    return 0;
}

