#include  <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode {
    public:
    int data;
    BinaryTreeNode * left;
    BinaryTreeNode * right;    

    BinaryTreeNode(int data){
        this->data=data;
        left =NULL;
        right=NULL;
    }

    ~BinaryTreeNode(){
        delete left;
        delete right;
    }


};

BinaryTreeNode<int> * TakeInputLevelWise(){

    cout<<"Enter root data :";
    int rootdata;
    cin>>rootdata;
    if(rootdata==-1) return NULL;
    BinaryTreeNode<int> * root=new BinaryTreeNode<int> (rootdata);

    queue<BinaryTreeNode<int> * > q;
    q.push(root);

    while(!q.empty()){
        BinaryTreeNode <int> * frontNode = q.front();
        q.pop();
        cout<<"Enter left child of "<<frontNode->data<<":";
        int leftchild;
        cin>>leftchild;
        if(leftchild!=-1){
         BinaryTreeNode <int> * leftNode = new    BinaryTreeNode<int> (leftchild);
         frontNode->left=leftNode;
         q.push(leftNode);
        }
        cout<<"Enter right child of "<<frontNode->data<<":";
        int rightchild;
        cin>>rightchild;
        if(rightchild!=-1){
         BinaryTreeNode <int> * rightNode = new    BinaryTreeNode<int> (rightchild);
         frontNode->right=rightNode;
         q.push(rightNode);
        }
    }


    return root;


}

void PrintBTLevelWise(BinaryTreeNode<int> * root){

    if(root==NULL) return ;
    queue<BinaryTreeNode<int> * > q;
    q.push(root);

    while(!q.empty()){
     BinaryTreeNode <int> * frontNode = q.front();
     q.pop();
     cout<<frontNode->data<<":";
     if(frontNode->left) {
        cout<<"L"<<frontNode->left->data;
        q.push(frontNode->left);


     }

     if(frontNode->right){
        cout<<"R"<<frontNode->right->data;
        q.push(frontNode->right);
     }
     cout<<endl;
    }
}