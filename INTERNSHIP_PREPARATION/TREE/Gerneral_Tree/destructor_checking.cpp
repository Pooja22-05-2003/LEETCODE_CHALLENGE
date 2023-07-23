#include <bits/stdc++.h>

using namespace std;
#include "TreeClass.cpp"


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


//3 PREORDER TRAVERSAL

void postorder(TreeNode <int>* root){
    if(root==NULL) return ;
   
    for(int i=0;i<root->children.size();i++){
        postorder(root->children[i]);
    }
    cout<<root->data<<" ";
    
}

int main(){
   
    // calling print function

    TreeNode <int> * root=takeInputLevelWise();
    printLevelWise(root);
    cout<<"Postorder printing :";
    postorder(root);

   cout<<"root->data:"<<root->data<<endl;
    delete root;
     cout<<"root->data:"<<root->data<<endl;
    return 0;
}

/*


SUCCESSFULLY DELETING ✅
Enter data:
1
Enter Number of children of 1:2
Enter 0th child of 1=2
Enter 1th child of 1=3
Enter Number of children of 2:2
Enter 0th child of 2=4
Enter 1th child of 2=5
Enter Number of children of 3:0
Enter Number of children of 4:0
Enter Number of children of 5:0
1:2,3,
2:4,5,
3:
4:
5:
Postorder printing :4 5 2 3 1 root->data:1
hi
hi
hi
hi
root->data:18775184

*/