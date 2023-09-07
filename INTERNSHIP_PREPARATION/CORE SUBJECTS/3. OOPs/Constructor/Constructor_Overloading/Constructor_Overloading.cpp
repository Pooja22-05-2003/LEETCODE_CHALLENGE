#include <bits/stdc++.h>
using namespace std;
class Smartphone{

    public :
    string ModelName;
    int ModelNumber;
    bool Five_g_supported;

    // Operator overloading is making different constructors having same name but they have different number
    // of Paramters or different datatypes of parameters

    Smartphone(string val1,int val2){
        ModelName=val1;
        ModelNumber=val2;
        Five_g_supported=false;
    }


    Smartphone ( string v1,int v2, bool v3){
        ModelName=v1;
        ModelNumber=v2;
        Five_g_supported=v3;
    }
};

int main(){

    Smartphone Nokia("iPhone",22);

    cout<<"Nokia => ";
    cout<<"Model Name : "<<Nokia.ModelName<<endl;
    cout<<"Model Number : "<<Nokia.ModelNumber<<endl;
    cout<<" 5g Supported ? : "<<Nokia.Five_g_supported<<endl;

   Smartphone Nokia1("Redmi" , 322, true);
   
    return 0;
}

