#include <iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

    // parameterized constructor

  
    Node(int data ){
        this->data=data;
        next=NULL;
    }
};

int main(){

    // Instantiation of object 

    /*
    2 types :

    1. static allocation
    2. daynamic allocation

    
    
    
    */


   
    // 1. static allocation

    Node n1(1);

    // storing the address of n1
    Node * head=&n1;


    // creating 2nd node 
    Node n2(2);


    // creating connection btw n1 and n2

    n1.next=&n2;

    Node n3(3);
    n2.next=&n3;

    // cout<<"head value :"<<head->data<<endl;
    // cout<<"head : "<<head<<endl;
    // cout<<"node 1 : "<<n1.data<<endl;
    // cout<<"node 2 : "<<n2.data<<endl;
    // cout<<"node 3 : "<<n3.data<<endl;

    // Output :
// head value :1
// head : 0x61feb4
// node 1 : 1
// node 2 : 2
// node 3 : 3




    /*
    
    --> Print whole linked list 
    
    
    */

    Node * temp=head;
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }

    // output : 1->2->3->

    return 0;
}