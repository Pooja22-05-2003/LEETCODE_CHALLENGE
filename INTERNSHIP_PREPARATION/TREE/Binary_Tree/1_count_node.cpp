#include "binaryTreeNode.cpp"

// BinaryTreeNode<int>*root=TakeInputLevelWise();
// PrintBTLevelWise(root);

int count(BinaryTreeNode<int>*root){
    if(root==NULL) return 0;
    return 1+ count(root->left)+count(root->right);
}


int main(){
    BinaryTreeNode<int>*root=TakeInputLevelWise();
    PrintBTLevelWise(root);
    cout<<"total Nodes : "<<count(root);
    
}

/*
Enter root data :1
Enter left child of 1:2
Enter right child of 1:3
Enter left child of 2:4
Enter right child of 2:5
Enter left child of 3:-1
Enter right child of 3:-1
Enter left child of 4:-1
Enter right child of 4:-1
Enter left child of 5:-1
Enter right child of 5:-1
1:L2R3
2:L4R5
3:
4:
5:
total Nodes : 5
*/