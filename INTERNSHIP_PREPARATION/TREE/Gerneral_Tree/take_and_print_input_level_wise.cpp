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


//1 takeinput
TreeNode <int> * takeInputLevelWise(){


    cout<<"Enter data:"<<endl;
    int rootdata;
    cin>>rootdata;

   TreeNode <int> * root=new TreeNode<int> (rootdata);

   // queue for storing all the pending nodes of which we had not taken its children
   queue<TreeNode<int>*> pending_node;

   pending_node.push(root);

   while(!pending_node.empty()){

    TreeNode<int> * front=pending_node.front();
    pending_node.pop();

    int child;
    cout<<"Enter Number of children of "<<front->data<<":";
    cin>>child;

    for(int i=0;i<child;i++){
        int childData;
        cout<<"Enter "<<i<<"th child of "<<front->data<<"=";
        cin>>childData;
        TreeNode<int> * childNode=new TreeNode<int>(childData);
        front->children.push_back(childNode);
        pending_node.push(childNode);
    }
   }
    

    return root;

}



// 2nd type of print function with some manners now


void printLevelWise(TreeNode <int>* root){
    queue<TreeNode <int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int> * frontNode= q.front();
        cout<<frontNode->data<<":";
        q.pop();
        for(int i=0;i<frontNode->children.size();i++){
            TreeNode<int> * childNode=frontNode->children[i];
            cout<<childNode->data<<",";
            q.push(childNode);
        }
        cout<<endl;

    }

}


int main(){
   
    // calling print function

    TreeNode <int> * root=takeInputLevelWise();
    printLevelWise(root);


    return 0;
}

