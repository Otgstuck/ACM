#include<iostream>

using namespace std;
const int N=1000010;
int n,k;
int a[N],q[N];//a是原来的值,q是单调队列 ,队列里面存的是下标 
int main(void)
{
	cin>>n>>k;
	for(int i=0;i<n;i++)	cin>>a[i];
	int hh=0,tt=-1;
	for(int i=0;i<n;i++)	//队列维护长度为k的窗口 
	{
		//判断队头是否已经滑出窗口，hh<=kk是来判断队列是否为空 
		if(hh <=tt &&i-k+1 > q[hh])  hh++;	//说明此时已经出了窗口了 
		//如果新插的数比队尾的数字要小，就把队尾删掉
		while(hh <= tt &&a[q[tt]]>=a[i])	tt--;
		q[++tt]=i; 
		if(i>=k-1)	cout<<a[q[hh]]<<" ";  
	}
	puts("");
	
	 hh=0,tt=-1;
	for(int i=0;i<n;i++)	//队列维护长度为k的窗口 
	{
		//判断队头是否已经滑出窗口，hh<=kk是来判断队列是否为空 
		if(hh <=tt &&i-k+1 > q[hh])  hh++;	//说明此时已经出了窗口了 
		//如果新插的数比队尾的数字要大，就把队尾删掉
		while(hh <= tt &&a[q[tt]]<=a[i])	tt--;
		q[++tt]=i;
		if(i>=k-1)	cout<<a[q[hh]]<<" ";  
	}
	puts(" ");

	return 0;
}



//ACWing T154 滑动窗口 
