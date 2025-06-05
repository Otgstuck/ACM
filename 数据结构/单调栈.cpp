#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int n;
int stk[N],tt;
int main(void){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		while(tt &&stk[tt]>=x)	tt--;
		if(tt)cout<<stk[tt]<<endl;
		else cout<< -1 <<endl;
		stk[++tt] =x ;
	}
	return 0;
}


//ACWing µ¥µ÷Õ» T830 
