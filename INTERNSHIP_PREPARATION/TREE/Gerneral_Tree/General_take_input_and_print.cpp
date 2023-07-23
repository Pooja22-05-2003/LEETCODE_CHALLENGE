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
TreeNode <int> * takeinput(){


    cout<<"Enter data:"<<endl;
    int rootdata;
    cin>>rootdata;

   
    TreeNode<int> * root=new TreeNode<int>(rootdata);
    int n ;
    cout<<"Enter number of children of "<<rootdata<<":";
    cin>>n;

    for(int i=0;i<n;i++){
 
        TreeNode <int> * child=takeinput();
        root->children.push_back(child);
    }

    return root;

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
   
    // calling print function

    TreeNode <int> * root=takeinput();
    print2(root);


    return 0;
}


/*

output :

Enter data:
1
Enter number of children of 1:3
Enter data:
2
Enter number of children of 2:2
Enter data:
5
Enter number of children of 5:0
Enter data:
6
Enter number of children of 6:0
Enter data:
3
Enter number of children of 3:2
Enter data:
7
Enter number of children of 7:0
Enter data:
8
Enter number of children of 8:0
Enter data:
4
Enter number of children of 4:0
1:2,3,4,
2:5,6,
5:
6:
3:7,8,
7:
8:
4:

*/