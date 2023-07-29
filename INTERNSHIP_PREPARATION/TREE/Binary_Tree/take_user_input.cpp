#include "binaryTreeNode.cpp"


// 1. takeinput
BinaryTreeNode <int> * takeInput(){
    cout<<"Enter data :"<<endl;
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }

    BinaryTreeNode<int> * root= new  BinaryTreeNode<int> (d);
    BinaryTreeNode <int>* leftNode= takeInput();
    BinaryTreeNode <int>* rightNode= takeInput();

    root->left=leftNode;
    root->right=rightNode;

    return root;

    

}

// 2. Print
void printBT( BinaryTreeNode <int> * root){
    if(root==NULL) return ;
    cout<<root->data<<":";
    if(root->left) cout<<"L"<<root->left->data;
    if(root->right) cout<<" R"<<root->right->data;
    cout<<endl;
    printBT(root->left);
    printBT(root->right);

}
int main(){
    BinaryTreeNode<int> * root=takeInput();
    printBT(root);

}

/*

Enter data :
1
Enter data :
2
Enter data :
-1
Enter data :
-1
Enter data :
3
Enter data :
-1
Enter data :
-1
1:L2 R3
2:
3:

*/