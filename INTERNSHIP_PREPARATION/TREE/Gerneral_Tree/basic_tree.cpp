#include <bits/stdc++.h>
using namespace std;


// creating class TreeNode 
// creating gerneral tree node of any DataType

template<typename T>
class TreeNode {

    public:
    T data;

    // it is a vector of type treenode <T> which store adrees of that treenode 
    vector <TreeNode<T>*>children;

    // consturctor 
    TreeNode (T data){
        this->data=data;
    }


    
};


// 2. Print function

void print( TreeNode <int>* root){
    cout<<root->data<<endl;
    for(int i=0;i<root->children.size();i++){
        print(root->children[i]);
    }
}

// 2nd type of print function with some manners now


void print2(TreeNode <int>* root){
    cout<<root->data<<":";

    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }

    cout<<endl;

     for(int i=0;i<root->children.size();i++){
        print2(root->children[i]);
    }
}
int main(){
    TreeNode <int>* node1=new TreeNode<int>(2);
    TreeNode <int>* root=new TreeNode<int>(1);
    TreeNode <int>* node2=new TreeNode<int>(3);
    TreeNode <int>* node3=new TreeNode<int>(4);
    TreeNode <int>* node4=new TreeNode<int>(5);

    root->children.push_back(node1);
    root->children.push_back(node2);
    root->children.push_back(node3);
    node1->children.push_back(node4);
    // calling print function
    print(root);
    print2(root);


    return 0;
}
