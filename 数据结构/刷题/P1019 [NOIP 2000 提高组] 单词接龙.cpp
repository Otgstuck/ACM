//
// Created by asus on 2025/3/19.
//

/*#include<bits/stdc++.h>

using namespace std;


const int N=100010;
int son[N][26],cnt[N],idx;//下标是0的点，既是根节点，又是空节点
typedef pair<int,int> PII;
string str;
int n,ans;


void insert(string str)
{
    int p = 0;
    for(int i = 0 ; str[i] ; i ++)
    {
        int u = str[i] - 'a';
        if(!son[p][u]) son[p][u] = idx++;
        p = son[p][u];
    }
    cnt[p]++;
}

int main(void)
{
    cin>>n;
    while(n--)
    {
        cin>>str;
        insert(str);
    }


    return 0;
}
 */



//队列维护

#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false)
#define author "otgStuck"
#define ll long long
using namespace std;
const int N = 1e5+9;
char arr[N];
string s;
int n,hh,tt;
int main(void)
{
    IOS;
    cin>>n;
    while(n--)
    {
        cin>>s;
        for(int i = hh ; i <= tt ; i ++ )
        {
            if(tt < s.size())
        }

    }
    return 0;
}