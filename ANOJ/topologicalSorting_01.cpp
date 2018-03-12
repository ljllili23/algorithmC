#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> edge[1001];
priority_queue <int, vector<int>,greater<int> > Q;
queue<int> ansQ;
//int ans[1001];
//int size;
int main(){
	int n,m;
	int inDegree[1001];
	while(cin>>n){
		cin>>m;
		for(int i=0;i<n;++i){
			inDegree[i]=0;
			edge[i].clear();
		}
		while(m--){
			int a,b;
			cin>>a>>b;
			++inDegree[b];
			edge[a].push_back(b);
		}
		while(!Q.empty()) Q.pop();
		while(!ansQ.empty()) ansQ.pop();
		for(int i=0;i<n;++i){
			if(inDegree[i]==0) Q.push(i);
		}
		//size=0;
		while(!Q.empty()){
			int newP = Q.top();
			//ans[size++]=newP;
			ansQ.push(newP);
			Q.pop();
			for(int i=0;i<edge[newP].size();++i){
				int tmp=edge[newP][i];
				--inDegree[tmp];
				if(inDegree[tmp]==0)
					Q.push(tmp);
			}
		}
		if(ansQ.size()==n){
			cout<<"YES"<<endl;
			 int size=ansQ.size();
			 for(int i=0;i<size;++i){
			 	if(i==0){
			 		//cout<<ans[i];
					cout<<ansQ.front();
			 		ansQ.pop();
			 	}else{
			 		//cout<<' '<<ans[i];
					cout<<' '<<ansQ.front();
			 		ansQ.pop();
			 	}
			 }
			 cout<<endl;
		}else{
			cout<<"NO"<<endl;
			int cnt=0;
			for(int i=0;i<n;++i){
				//int cnt;
				if(inDegree[i]!=0)
					++cnt;
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}
