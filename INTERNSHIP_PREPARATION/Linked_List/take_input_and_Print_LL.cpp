#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    // constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

Node *takeInput(){
    int n;
    cout<<"Enter data : "<<endl;
    cin>>n;
    Node * head=NULL;
    Node * tail;

    while(n!=-1){
        Node * newnode=new Node(n);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else {
            tail->next=newnode;
            tail=tail->next;
        }

       
         cout<<"Enter data : "<<endl;
        cin>>n;
        
    }

    return head;

}


void print(Node * head){
    Node * temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    Node * head=takeInput();
    print(head);


    return 0;
}