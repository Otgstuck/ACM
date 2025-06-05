#include<bits/stdc++.h>
using namespace std;
struct listnode{
	//数据域 
	int val;
	//指针域，指向下一个节点，保存下一个节点的地址 
	listnode* next;
};
void printlist(listnode* head){
		listnode* cur=head;
		while(cur!=NULL){
		cout<<cur->val<<endl;
		cur=cur->next;
	} 
}
int main(void){
	listnode* head=new listnode;
	//C语言写法：listnode* L=(listnode*)malloc(sizeof(listnode)); 
	//开辟一段内存，然后把内存地址返回回来
	head->val=0;
	head->next=NULL;
	listnode* next1=new listnode;
	next1->val=10;
	next1->next=NULL;
	listnode* next2=new listnode;
	next2->val=30;
	next2->next=NULL;
	
	head->next=next1;
	next1->next=next2;
	
	printlist(head);
	return 0;
}

//尾插法
//当前链表的最后一个节点的next指针指向新节点
//让新节点的next指向NULL 
void insertail(listnode* &head,int v){		//想让指针变量的地址改变，得取地址 
	//如果这是一个空链表 即head=NULL；
	if(head==NULL){
		listnode* node=new listnode;
		head=node;
		head->val=v;
		head->next=NULL;
		return 0;
	} 
	//先找到尾节点；
	//为节点的next是指向NULL；定义一个指针cur->next=NULL 说明cur指向最后一个节点
	listnode* cur=head;
	//找到最后一个节点
	while(cur->next!=NULL){	//数组可以很方便提取最后一个，但是这个得找 
		cur=cur->next;
	} 
	//此时cur已经指向最后一个节点；
	//先定义一个节点;
	listnode* newnode= new listnode;
	newnode->val=v;
	//新节点的next指向NULL； 
	newnode->next=NULL;
	cur->next=newnode; 
}

//头插法
void inserthead(listnode* &head,int v){
	listnode* newnode = new listnode;
	newnode->val=v;
	newnode->next=head;
	head = newnode;
} 
