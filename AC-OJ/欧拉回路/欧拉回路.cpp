#include <iostream>
#include <vector>
using namespace std;
int tree[1001];		//并查集
int degree[1001];	//统计每个点的度

int findRoot(int x){
	if(tree[x]==-1) return x;
	else{
		int tmp=findRoot(tree[x]);
		tree[x]=tmp;
		return tmp;
	}
}

//struct Edge{
//	int a,b;

//};
//vector<Edge> edge;
int main(){
	vector<int> list;	//用来记录所有的根节点，也就是不同的集合
	int n;
	int m;
	while(cin>>n){
		if(n==0) break;
		for(int i=1;i<=n;++i){
			tree[i]=-1;
			degree[i]=0;
		}
		while(!list.empty()) list.clear();
		cin>>m;
		while(m--){
			int a,b;
			cin>>a>>b;
			++degree[a];	//统计度
			++degree[b];
			a=findRoot(a);
			b=findRoot(b);
			if(a!=b){
				tree[a]=b;
			}
		}
		int breakflag=1;
		for(int i=1;i<=n;++i){
			if(degree[i]%2!=0){		//有度为奇数的结点 输出0；
				cout<<0<<endl;
				breakflag=0;
				break;
			}
			if(tree[i]==-1){
				list.push_back(i);	//找到所有的根结点
			}

		}
		if(breakflag==0) continue;	//有度为奇数的结点的话，不需要进行后续的操作；
		
		vector<int>::iterator it=list.begin();
		int flag=1;
		if(list.size()>1){			//如果根结点的个娄大于1的话，需要额外判断其是否是孤立的结点；
			for(;it!=list.end();++it){
				if(degree[*it]>0){
					--flag;
				}
			}
		}
		if(flag<0){
			cout<<0<<endl;
		}else{
			cout<<1<<endl;
		}
	}
	return 0;
}