#include<bits/stdc++.h>
using namespace std;
struct listnode{
	//������ 
	int val;
	//ָ����ָ����һ���ڵ㣬������һ���ڵ�ĵ�ַ 
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
	//C����д����listnode* L=(listnode*)malloc(sizeof(listnode)); 
	//����һ���ڴ棬Ȼ����ڴ��ַ���ػ���
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

//β�巨
//��ǰ��������һ���ڵ��nextָ��ָ���½ڵ�
//���½ڵ��nextָ��NULL 
void insertail(listnode* &head,int v){		//����ָ������ĵ�ַ�ı䣬��ȡ��ַ 
	//�������һ�������� ��head=NULL��
	if(head==NULL){
		listnode* node=new listnode;
		head=node;
		head->val=v;
		head->next=NULL;
		return 0;
	} 
	//���ҵ�β�ڵ㣻
	//Ϊ�ڵ��next��ָ��NULL������һ��ָ��cur->next=NULL ˵��curָ�����һ���ڵ�
	listnode* cur=head;
	//�ҵ����һ���ڵ�
	while(cur->next!=NULL){	//������Ժܷ�����ȡ���һ��������������� 
		cur=cur->next;
	} 
	//��ʱcur�Ѿ�ָ�����һ���ڵ㣻
	//�ȶ���һ���ڵ�;
	listnode* newnode= new listnode;
	newnode->val=v;
	//�½ڵ��nextָ��NULL�� 
	newnode->next=NULL;
	cur->next=newnode; 
}

//ͷ�巨
void inserthead(listnode* &head,int v){
	listnode* newnode = new listnode;
	newnode->val=v;
	newnode->next=head;
	head = newnode;
} 
