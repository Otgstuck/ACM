//
// Created by asus on 2025/3/20.
//

#include<iostream>

using namespace std;

struct biTree{
    //数据域
    int val;
    //指向左节点的指针域
    biTree* left;
    //指向右节点的指针域
    biTree* right;
};

void createTree(biTree** T){  // 传入指向根节点指针的指针
    int n;
    cin >> n;
    if(n == 0){
        *T = NULL;  // 修正：将外部指针置空
        return;
    } else {
        *T = new biTree;  // 为根节点分配内存
        (*T)->val = n;   // 存储节点值
        createTree(&((*T)->left));  // 递归创建左子树
        createTree(&((*T)->right));  // 递归创建右子树
    }
}

int main(void)
{



    return 0;
}