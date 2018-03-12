#include <iostream>
using namespace std;
struct Node{
	int next;
	int c;
}list[100000];
int Hash[100001]={0,};
int Abs(int x){
	return x>0?x:-x;
}
int main(){
	int n;
	while(cin>>n){
		int head;
		cin>>head;
		int pre;
		int addr;
		int elem;
		int next;
		while(n--){
			cin>>addr>>elem>>next;
			//list[head].next=addr;
			list[addr].c=elem;
			list[addr].next=next;
			//if(Hash[Abs(elem)]==0){
			//	Hash[Abs(elem)]=addr;
			//	}
			//head=addr;
		}
		int p=list[head].next;
		 pre=head;
		int cnt=0;
		while(p!=-1){
			if(Hash[list[p].c]==0){
				Hash[Abs(list[p].c)]=p;
				++cnt;
				pre=list[pre].next;
				p=list[pre].next;
			}else{
				list[pre].next=list[p].next;
				p=list[pre].next;
			}
			//pre=list[pre].next;
			//p=list[pre].next;
		}
		cout<<cnt<<' '<<head<<endl;
		pre=head;
		p=list[head].next;
		while(p!=-1){
			cout<<pre<<' '<<list[p].c<<' '<<p<<endl;
			pre=p;
			p=list[pre].next;
		}
	}
	return 0;
}