#include <bits/stdc++.h>
using namespace std;
class Smartphone{

    public :
    string ModelName;
    int ModelNumber;

    // Default constructor are those constructor which do not have any parameters
    Smartphone(){
        ModelName="xyz";
        ModelNumber=0;
    }


};

int main(){

    Smartphone Nokia;
    cout<<"Model Name : "<<Nokia.ModelName<<endl;
    cout<<"Model Number : "<<Nokia.ModelNumber<<endl;
    return 0;
}

