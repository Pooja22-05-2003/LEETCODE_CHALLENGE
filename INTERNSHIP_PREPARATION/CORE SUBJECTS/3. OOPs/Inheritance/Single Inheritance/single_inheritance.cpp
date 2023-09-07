#include <iostream>
using namespace std;

class humans{

    bool speak;
    string name;
    int age;


    public:

    humans(){}
    humans(int age, string name,bool speak){
        this->speak=speak;
        this->age=age;
        this->name=name;
    }

    void showdata(){
        cout<<"age:"<<age<<endl;
        cout<<"speak:"<<speak<<endl;
        cout<<"name:"<<name<<endl;
    }



};


class teacher : public humans{

    public:
    bool KnowProgramming;
    bool KnowEnglish;

    teacher(bool val1, bool val2){
        KnowProgramming=val1;
        KnowEnglish=val2;
    }

    void showData(){
        cout<<"KnowProgramming:"<<KnowProgramming<<endl;
        cout<<"KnowEnglish:"<<KnowEnglish<<endl;
    }
    

};

int main(){

    humans h1(32, "Shivangi",true);
    h1.showdata();
    teacher t1(true,false);
    t1.showData();

   
}