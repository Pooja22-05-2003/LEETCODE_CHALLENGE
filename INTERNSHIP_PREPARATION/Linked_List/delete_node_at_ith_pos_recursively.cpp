// Time Complexity of recursive linked list insertion at ith pos : O(i)
// Space Complexity =O(i) 
/*

In the recursive case, the function makes a recursive call to insert_at_ith_pos_recursive with the next node as the head. 
This recursive call is made until the desired position is reached (i = 0). 
Each recursive call adds a new frame to the call stack, which requires space for the local variables of that frame.

Since the number of recursive calls depends on the value of i, the space complexity is proportional to i. Therefore, 
the space complexity of the function is O(i).

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


// 3 (RECURSIVE)
Node *delete_at_ith_pos_recursive(Node*head , int i  ){
    

    // base case
    Node * t=head;
    if(head==NULL){
        return head;
    }
    if(i==0){
        head=head->next;
        return head;
        
    }
    
    // recurive
    Node * newhead=delete_at_ith_pos_recursive(head->next , i-1);
    t->next=newhead;


    return t;
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
   
    Node * nhead=delete_at_ith_pos_recursive(head ,i);
    print(nhead);


    return 0;
}