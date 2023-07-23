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

//2
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


// 3
Node *delete_at_ith_pos(Node*head , int i ){
    
    if(i==0){
       head=head->next;
        
    }
    else {
        Node * tmp=head;
        Node * prev=head;
        int cnt=1;
        while(cnt!=i){
            prev=tmp;
            tmp=tmp->next;
            cnt++;
        }
        
        prev->next=tmp->next;

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
    cout<<endl;
    cout<<"Enter ith pos:"<<endl;
    int i;
    cin>>i;
   
    Node * nhead=delete_at_ith_pos(head ,i );
    print(head);


    return 0;
}