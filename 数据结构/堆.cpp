#include<bits/stdc++.h>
//@author: OtgStuck
//@date: 2021/10/16
//@description: 手写堆
using namespace std;
/*
 1.l x 插入一个数
 2.PM 输出当前集合中的最小值
 3.DM 删除当前集合中的最小值
 4.D k 删除第k个插入的数
 5.C k x 修改第k个插入的数为x
 */
const int N=100010;
//ph[k]存的是第k个插入的数是哪一个点，在堆中的下标是什么
//hp[k]存的是堆中下标为k的数是第几个插入的数
int h[N],ph[N],hp[N], cur_size;
void heap_swap(int a,int b){
    swap(ph[hp[a]],ph[hp[b]]);//这一步说人话就是，交换a和b的下标
    //hp是用来获取点a，b是第几个插入的点
    //ph是用来获取a，b的下标是什么，根据知道他们是第几个插入的点，可以知道他们的下标是什么
    swap(hp[a],hp[b]);
    swap(h[a],h[b]);//交换 a，b在堆里的值
}

void down(int u){
    int t=u;
    if(u*2<=cur_size&&h[u*2]<h[t]) t=u*2;
    if(u*2+1<=cur_size&&h[u*2+1]<h[t]) t=u*2+1;
    if(u!=t){
        heap_swap(u,t);
        down(t);

}
void up(int u){
    while(u/2 && h[u/2]>h[u]){
        heap_swap(u/2,u);
        u/=2;
    }
}

int main(void){
    int n,m=0;
    cin>>n;
    while(n--){
        char op[10];
        int k,x;
        scanf("%s",op);
        if(!strcmp(op,"I")){
            scanf("%d",&x);
            cur_size++;
            m++;
            ph[m] = cur_size;
            hp[cur_size] = m;
            h[cur_size] = x;
            up(cur_size);
        }
        else if(!strcmp(op,"PM")){
            printf("%d\n",h[1]);
        }
        else if(!strcmp(op,"DM")){
            heap_swap(1,cur_size);
            cur_size--;
            down(1);
        }
        else if(!strcmp(op,"D")){
            scanf("%d",&k);
            k = ph[k];
            heap_swap(k,cur_size);
            cur_size--;
            down(k);
            up(k);
        }
        else{
            scanf("%d%d",&k,&x);
            k = ph[k];
            h[k] = x;
            down(k);



            up(k);
        }
    }
    return 0;
}