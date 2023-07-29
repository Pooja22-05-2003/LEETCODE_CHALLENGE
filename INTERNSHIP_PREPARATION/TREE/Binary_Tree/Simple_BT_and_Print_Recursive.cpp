#include "binaryTreeNode.cpp"


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
    BinaryTreeNode <int> * root= new BinaryTreeNode<int> (1);
    BinaryTreeNode <int> * leftNode= new BinaryTreeNode<int> (2);
    BinaryTreeNode <int> * rightNode= new BinaryTreeNode<int> (3);
    root->left=leftNode;
    root->right=rightNode;

    printBT(root);
}