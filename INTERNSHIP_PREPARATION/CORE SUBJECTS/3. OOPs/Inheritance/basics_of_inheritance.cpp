#include <iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;

    public:
    Employee(int id){
        this->id=id;
        this->salary=34.0;
    }

    Employee(){

    }
};


// ********** Default visibility mode is Private ********
// ********** Private visibility mode : public memeber of the base class become private member of the derived class***************
// ********** In public mode of inheritance , public memeber will remain public and ### (private will never be inherited in any case)  **********
// Derived class syntax

class Programmer : Employee{
    public:
    int languageCode=9;


    Programmer(int id){
        this->id=id;
    }

};

int main(){

    Employee e1(1);
    Employee e2(2);

    // cout<<e1.salary<<endl;
    cout<<e2.salary<<endl;


    Programmer p1(1);
    return 0;
}