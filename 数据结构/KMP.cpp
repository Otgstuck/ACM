#include<bits/stdc++.h>
using namespace std;
const int N=10010,M=100010;
int n,m;
char p[N],s[M];
int next[N];
int main(void){
	cin>>n>>p+1>>m>>s+1;
	//��next����
	for(int i=2,j=0;i<=n;i++){
		while(j && p[i]!=p[j+1])	j=next[j];
		if(p[i]==p[j+1])	j++;
		next[i]=j;
	} 
	//kmpƥ����� 
	for(int i=1,j=0;i<=m;i++){
		while(j && s[i]!= p[j+1])	j=next[j];
		if(s[i]==p[j+1])	j++;
		if(j==n){
			//ƥ��ɹ�
			printf("%d",i-n);
			j=next[j];
		}
	}
	return 0;
}
