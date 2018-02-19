#include <stdio.h>

int tree[1001];
int mark[1001];
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<1001;++i){
            tree[i]=-1;
            mark[i]=2;
        }
        for(int i=1;i<n;++i){
            int a,b;
            scanf("%d%d",&a,&b);
            --mark[a];
            if(mark[a]<0) continue;
            tree[b] = a;
        }
        int max=1;
        for(int i=0;i<n;++i){
            int ans=1;
            int t=tree[i];
            while(t!=-1){
                
                t=tree[t];
                ++ans;
            }
            if(ans>max) max=ans;
        }
        printf("%d\n",max);
    }
    return 0;
}