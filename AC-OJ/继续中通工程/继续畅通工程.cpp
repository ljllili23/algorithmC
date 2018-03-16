#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Edge{
	int a;
	int b;
	int cost;
	int flag;
};
int tree[101];
int findRoot(int x){
	if(tree[x]==-1) return x;
	else{
		int tmp=findRoot(tree[x]);
		tree[x]=tmp;
		return tmp;
	}
}
bool cmp(const Edge &a,const Edge &b){
	return a.cost<b.cost;
}
int main(){
	vector<Edge> edge;
	int n;
	while(cin>>n){
		if(n==0) break;
		while(!edge.empty()) edge.clear();
		int m=n*(n-1)/2;
		while(m--){
			Edge tmp;
			cin>>tmp.a>>tmp.b>>tmp.cost>>tmp.flag;
			edge.push_back(tmp);
		}
		sort(edge.begin(),edge.end(),cmp);
		for(int i=1;i<=n;++i){
			tree[i]=-1;
		}
		int ans=0;
		for(vector<Edge>::iterator it=edge.begin();it!=edge.end();++it){
			if(it->flag==1){
				int a=findRoot(it->a);
				int b=findRoot(it->b);
				if(a!=b){
					tree[a]=b;	//注意别写成a=tree[b];
				}
			}
		}
		for(vector<Edge>::iterator it=edge.begin();it!=edge.end();++it){
			if(it->flag==0){
				int a=findRoot(it->a);
				int b=findRoot(it->b);
				if(a!=b){
					tree[a]=b;	//Ditto^
					ans+=it->cost;
				}
			}
		}
		cout<<ans<<endl;
		
	}
	return 0;
}