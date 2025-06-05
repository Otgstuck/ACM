
#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+9;
int pre[maxn];//存父节点 
int root(int x){
	/*if(pre[x] ==x)return x;
	return pre[x] = root[pre[x]];*/
	return pre[x] ==x?x:pre[x] = root(pre[x]);               //如果当前是根就返回根，如果当前不是根就返回父亲的根，并且在返回
}
void Merge(int x,int y){                            //合并函数Merge
	pre[root(x)]=root(y);
}
bool isCon(int x,int y){                            //判断这两个点是否连通
	return root(x) == root(y);           //通过根是不是相同的来判断
}
void init(int N){
	for(int i=1;i<=N;++i) pre[i]=i;  //初始化
}
signed main(void){
	//ios::sync_wiht_stdio(0);
	int N,M;
	cin>>N>>M;
	init(N);
	while(M--){
		int Z,X,Y;
		cin>>Z>>X>>Y;
		if(Z==1) Merge(X,Y);
		else if(Z==2) printf("%c\n",isCon(X,Y)?'Y':'N');
	}
	return 0;
	
}
