//Dijkstra algorithm
//2018-02-10
//@author: LeeJiangLee
#include <stdio.h>
#include <vector>
using namespace std;
struct E{
	int next;
	int cost;
};
vector<E> edge[101];
bool mark[101];
int Dist[101];
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n==0 && m==0) break;
		for(int i=1;i<=n;++i){
			edge[i].clear();
			mark[i]=false;
			Dist[i]=-1;
		}
		while(m--){
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			E tmp;
			tmp.cost = c;
			tmp.next = b;
			edge[a].push_back(tmp);
			tmp.next = a;
			edge[b].push_back(tmp);
		}
		int newP = 1;
		mark[1]=true;
		Dist[1]=0;
		for(int i=1;i<n;++i){
			for(int j=0;j<edge[newP].size();++j){
				int t=edge[newP][j].next;
				int c=edge[newP][j].cost;
				if(mark[t]==true) continue;
				if(Dist[t]==-1 || Dist[t]>Dist[newP]+c)
					Dist[t] = Dist[newP]+c;
			}
			int min = 123123123;
			for(int j=1;j<=n;++j){
				if(mark[j]==true) continue;
				if(Dist[j]==-1) continue;
				if(Dist<min){
					min = Dist[j];
					newP = j;
				}
			}
			mark[newP]=true;
		}
		printf("%d\n",Dist[n]);

	}
	return 0;
}