#include<iostream>
#include<algorithm>

using namespace std;
const int N=1e5+9;
int n,m;
int h[N],cur_size;

void down(int u){
    int t=u;
    if(u*2<=cur_size&&h[u*2]<h[t]) t=u*2;
    if(u*2+1<=cur_size&&h[u*2+1]<h[t]) t=u*2+1;
    if(u!=t){
        swap(h[u],h[t]);
        down(t);
    }
}

int main(void){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i) scanf("%d",&h[i]);
    cur_size=n;
    for(int i=n/2;i;i--) down(i);
    while(m--){
        printf("%d ",h[1]);
        h[1] = h[cur_size];
        cur_size--;
        down(1);
    }
    return 0;
}
