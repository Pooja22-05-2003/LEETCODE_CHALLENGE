// Time Complexity =O(logn)[for balances tree-bast case]
                 // O(n) [For Worst Case]


                //  so O(n*H) (n is number of nodes) and h is height if tree

// Space Complexity =  O(H)

#include "binaryTreeNode.cpp"

// BinaryTreeNode<int>*root=TakeInputLevelWise();
// PrintBTLevelWise(root);

int height(BinaryTreeNode<int>*root){
    if(root==NULL) return 0;
    return 1+max(height(root->left) , height(root->right));
}
int Diameter1(BinaryTreeNode<int>*root){
    if(root==NULL) return 0;

    int option1=height(root->left) +height(root->right);
    int option2=Diameter1(root->left);
    int option3=Diameter1(root->right);

    return max(option1 , max(option1, option2));

}
int main(){
    BinaryTreeNode<int>*root=TakeInputLevelWise();
    PrintBTLevelWise(root);
    cout<<"Diameter of Tree :"<<Diameter1(root)<<endl;
    return 0;
}


/*


1.  Balanced Tree


Enter root data :1
Enter left child of 1:2
Enter right child of 1:3
Enter left child of 2:4
Enter right child of 2:5
Enter left child of 3:6
Enter right child of 3:7
Enter left child of 4:-1
Enter right child of 4:-1
Enter left child of 5:-1
Enter right child of 5:-1
Enter left child of 6:-1
Enter right child of 6:-1
Enter left child of 7:-1
Enter right child of 7:-1
1:L2R3
2:L4R5
3:L6R7
4:
5:
6:
7:
Diameter of Tree :4




2. skewed tree


Enter root data :1
Enter left child of 1:-1
Enter right child of 1:2
Enter left child of 2:-1
Enter right child of 2:3
Enter left child of 3:-1
Enter right child of 3:4
Enter left child of 4:-1
Enter right child of 4:-1
1:R2
2:R3
3:R4
4:
Diameter of Tree :3





3. Unique tree where  final answer as diameter comer from left tree

Enter root data :1
Enter left child of 1:2
Enter right child of 1:3
Enter left child of 2:4
Enter right child of 2:5
Enter left child of 3:-1
Enter right child of 3:-1
Enter left child of 4:6
Enter right child of 4:7
Enter left child of 5:8
Enter right child of 5:9
Enter left child of 6:10
Enter right child of 6:-1
Enter left child of 7:-1
Enter right child of 7:-1
Enter left child of 8:-1
Enter right child of 8:-1
Enter left child of 9:-1
Enter right child of 9:11
Enter left child of 10:-1
Enter right child of 10:-1
Enter left child of 11:-1
Enter right child of 11:-1
1:L2R3
2:L4R5
3:
4:L6R7
5:L8R9
6:L10
7:
8:
9:R11
10:
11:
Diameter of Tree :6

*/