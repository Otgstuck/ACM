#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int m;
int e[N],l[N],r[N],idx;
void init(){
	r[0]=1;
	l[1]=0;
	idx=2;
}
//在下标是k的点的右边插入x； 
void add(int k,int x){
	e[idx]=x;
	r[idx]=r[k];
	l[idx]=k;
	l[r[k]]=idx;
	r[k]=idx ++;
	
}
//删除第k个点
void remove(int k){
	r[l[k]]=r[k];
	l[r[k]]=l[k];
}
int main(void){
		
	return 0;
}
