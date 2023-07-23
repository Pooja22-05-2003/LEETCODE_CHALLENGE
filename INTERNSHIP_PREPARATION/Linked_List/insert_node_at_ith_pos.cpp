// Time Complexity = O(i)
// Space Complexity =O(1)
/*
Regarding the space complexity, it remains the same as the recursive approach, which is O(1).
 The function uses a constant amount of additional space for its local variables, regardless of
 the size of the list or the value of i.
*/


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
Node *insert_at_ith_pos(Node*head , int i , int data ){
    Node * newnode=new Node(data);
    if(i==0){
        Node * temp=head->next;
        head=newnode;
        newnode->next=temp;
        
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
        
        prev->next=newnode;
        newnode->next=tmp;

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
    cout<<"Enter data :"<<endl;
    int data;
    cin>>data;
    Node * nhead=insert_at_ith_pos(head ,i , data);
    print(head);


    return 0;
}