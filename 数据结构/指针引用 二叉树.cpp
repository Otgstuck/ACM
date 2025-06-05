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

//�������
void PreorderTraversal(BinaryTree* T)
{
    if( T == NULL )  return;
    cout<< T -> data<<" ";
    PreorderTraversal(T -> lchild);
    PreorderTraversal(T -> rchild);
}

//�������

void InorderTraversal(BinaryTree* T)
{
    if( T == NULL ) return;
    InorderTraversal(T -> lchild);
    cout<<T -> data << " ";
    InorderTraversal(T -> rchild);
}

//��������
void PostorderTraversal(BinaryTree* T)
{
    if(T == NULL )  return;
    PostorderTraversal(T -> lchild);
    PostorderTraversal(T -> rchild);
    cout<<T -> data <<" ";
}

//��α���

void LevelOrderTraversal(BinaryTree* T)
{
    queue<BinaryTree*> queue;
    BinaryTree* cur = T;
    //ͷ�ڵ����
    queue.push(cur);
    //����Ϊ��ʱѭ������

    while(!queue.empty()){
        cur = queue.front();
        queue.pop();
        cout<<cur -> data<<" ";
        //���Ӳ�Ϊ�����
        if(cur -> lchild != NULL)   queue.push(cur -> lchild);
        //�Һ��Ӳ�Ϊ��ʱ���
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