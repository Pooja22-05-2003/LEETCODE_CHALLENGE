
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

    ~TreeNode(){
        for(int i=0;i<children.size();i++){
            cout<<"hi"<<endl;
            delete children[i];
        }
    }
    
};