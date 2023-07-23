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


//3 Height of tree OR Number of levels
int getHeight(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL) return 0;

    int ans=0;

    for(int i=0;i<root->children.size();i++){
        int smallans=getHeight(root->children[i]);
        if(smallans>ans) ans=smallans;
    }

    return ans+1;
}


int main(){
   
    // calling print function

    TreeNode <int> * root=takeInputLevelWise();
    printLevelWise(root);
    cout<<"eight of tree:"<<getHeight(root)<<endl;


    return 0;
}


/*

Enter data:
1
Enter Number of children of 1:3
Enter 0th child of 1=2
Enter 1th child of 1=3
Enter 2th child of 1=4
Enter Number of children of 2:2
Enter 0th child of 2=5
Enter 1th child of 2=6
Enter Number of children of 3:1
Enter 0th child of 3=7
Enter Number of children of 4:0
Enter Number of children of 5:0
Enter Number of children of 6:0
Enter Number of children of 7:0
1:2,3,4,
2:5,6,
3:7,
4:
5:
6:
7:
Height of tree:3


*/