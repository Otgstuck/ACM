#include<iostream>

using namespace std;
const int N=1000010;
int n,k;
int a[N],q[N];//a��ԭ����ֵ,q�ǵ������� ,�������������±� 
int main(void)
{
	cin>>n>>k;
	for(int i=0;i<n;i++)	cin>>a[i];
	int hh=0,tt=-1;
	for(int i=0;i<n;i++)	//����ά������Ϊk�Ĵ��� 
	{
		//�ж϶�ͷ�Ƿ��Ѿ��������ڣ�hh<=kk�����ж϶����Ƿ�Ϊ�� 
		if(hh <=tt &&i-k+1 > q[hh])  hh++;	//˵����ʱ�Ѿ����˴����� 
		//����²�����ȶ�β������ҪС���ͰѶ�βɾ��
		while(hh <= tt &&a[q[tt]]>=a[i])	tt--;
		q[++tt]=i; 
		if(i>=k-1)	cout<<a[q[hh]]<<" ";  
	}
	puts("");
	
	 hh=0,tt=-1;
	for(int i=0;i<n;i++)	//����ά������Ϊk�Ĵ��� 
	{
		//�ж϶�ͷ�Ƿ��Ѿ��������ڣ�hh<=kk�����ж϶����Ƿ�Ϊ�� 
		if(hh <=tt &&i-k+1 > q[hh])  hh++;	//˵����ʱ�Ѿ����˴����� 
		//����²�����ȶ�β������Ҫ�󣬾ͰѶ�βɾ��
		while(hh <= tt &&a[q[tt]]<=a[i])	tt--;
		q[++tt]=i;
		if(i>=k-1)	cout<<a[q[hh]]<<" ";  
	}
	puts(" ");

	return 0;
}



//ACWing T154 �������� 
