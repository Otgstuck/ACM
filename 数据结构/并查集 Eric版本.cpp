
#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+9;
int pre[maxn];//�游�ڵ� 
int root(int x){
	/*if(pre[x] ==x)return x;
	return pre[x] = root[pre[x]];*/
	return pre[x] ==x?x:pre[x] = root(pre[x]);               //�����ǰ�Ǹ��ͷ��ظ��������ǰ���Ǹ��ͷ��ظ��׵ĸ��������ڷ���
}
void Merge(int x,int y){                            //�ϲ�����Merge
	pre[root(x)]=root(y);
}
bool isCon(int x,int y){                            //�ж����������Ƿ���ͨ
	return root(x) == root(y);           //ͨ�����ǲ�����ͬ�����ж�
}
void init(int N){
	for(int i=1;i<=N;++i) pre[i]=i;  //��ʼ��
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
