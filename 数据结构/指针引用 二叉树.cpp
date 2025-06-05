#include<bits/stdc++.h>

using namespace std;

struct BinaryTree{
    char data;
    BinaryTree* lchild;
    BinaryTree* rchild;
};

BinaryTree* Create_BinaryTree(){
    BinaryTree* T = new BinaryTree;
    char ch;
    cin>>ch;
    if(ch == '#')   T = NULL;
    else{
        T -> data = ch;
        T -> lchild = Create_BinaryTree();
        T -> rchild = Create_BinaryTree();
    }
    return T;
}

//先序遍历
void PreorderTraversal(BinaryTree* T)
{
    if( T == NULL )  return;
    cout<< T -> data<<" ";
    PreorderTraversal(T -> lchild);
    PreorderTraversal(T -> rchild);
}

//中序遍历

void InorderTraversal(BinaryTree* T)
{
    if( T == NULL ) return;
    InorderTraversal(T -> lchild);
    cout<<T -> data << " ";
    InorderTraversal(T -> rchild);
}

//后续遍历
void PostorderTraversal(BinaryTree* T)
{
    if(T == NULL )  return;
    PostorderTraversal(T -> lchild);
    PostorderTraversal(T -> rchild);
    cout<<T -> data <<" ";
}

//层次遍历

void LevelOrderTraversal(BinaryTree* T)
{
    queue<BinaryTree*> queue;
    BinaryTree* cur = T;
    //头节点入队
    queue.push(cur);
    //队列为空时循环结束

    while(!queue.empty()){
        cur = queue.front();
        queue.pop();
        cout<<cur -> data<<" ";
        //左孩子不为空入队
        if(cur -> lchild != NULL)   queue.push(cur -> lchild);
        //右孩子不为空时入队
        if(cur -> rchild != NULL)   queue.push(cur -> rchild);
    }
}

signed main(){
    BinaryTree* A = Create_BinaryTree();
    PreorderTraversal(A);
    cout<<endl;
    InorderTraversal(A);
    cout<<endl;
    PostorderTraversal(A);
    cout<<endl;
    return 0;
}