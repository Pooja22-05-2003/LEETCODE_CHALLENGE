#include <iostream>
using namespace std;


class box{

    public :
    int length;
    int * height;
    int breadth;

    box(){
        height=new int;
    }

    void SetData(int l,int b , int h){
        this->length=l;
        this->breadth=b;
        *(this->height)=h;
    }

    void ShowData(){
        cout<<"Lenght:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
        cout<<"Adress of height : "<<height<<endl;
        cout<<"height:"<<*height<<endl;
    }



};


int main(){

    // shallow copy

    box b1;
    b1.SetData(1,2,3);
    b1.ShowData();
 

    // creating other object be copy constructor
    box b2;
    b2=b1; // implicit assignment copy operator
    b2.ShowData();
   
    return 0;
}

/*



Lenght:1
Breadth:2
Adress of height : 0x11519e8
height:3
Lenght:1
Breadth:2
Adress of height : 0x11519e8
height:3


*/