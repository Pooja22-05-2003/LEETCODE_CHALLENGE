#include <iostream>
using namespace std;

// In deep copy , we create our own copy constructor
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


    box(box &b){
        length=b.length;
        breadth=b.breadth;

        // deep copy
        height=new int;
        *(height)=*(b.height);


    }

    ~box(){
        // bcs only height have address , is we not delete here then we will never able to delete it 
        delete height;
    }

};


int main(){

    // shallow copy

    box b1;
    b1.SetData(1,2,3);
    b1.ShowData();
 

    // creating other object be copy constructor
    box b2=b1;
    // box b2(b1)
    b2.ShowData();
    b1.SetData(5,6,7);

    cout<<"After change :"<<endl;
    b1.ShowData();
    b2.ShowData();

    return 0;
}

/*



Lenght:1
Breadth:2
Adress of height : 0x10319d8
height:3
Lenght:1
Breadth:2

// adresses are different 

Adress of height : 0x10319e8
height:3


*/


/*

Lenght:1
Breadth:2
Adress of height : 0xfd19d8
height:3
Lenght:1
Breadth:2
Adress of height : 0xfd19e8
height:3
After change :
Lenght:5
Breadth:6
Adress of height : 0xfd19d8
height:7
Lenght:1
Breadth:2
Adress of height : 0xfd19e8
height:3



*/