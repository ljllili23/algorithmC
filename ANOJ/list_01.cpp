#include <iostream>
#include <iomanip> //std::setfill	std::setw
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
		//int p=list[head].next;
		list[99999].next=head;
		int p = head;
		 pre=99999;
		int cnt=0;
		while(p!=-1){
			if(Hash[Abs(list[p].c)]==0){
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
		cout<<cnt<<' ';
		cout<<setfill('0')<<setw(5)<<head<<endl;
		pre=99999;
		p=list[pre].next;
		while(p!=-1){
			cout<<setfill('0')<<setw(5)<<p;
			cout<<' '<<list[p].c<<' ';
			if(list[p].next==-1){
				cout<<list[p].next<<endl;
			}else
				cout<<setfill('0')<<setw(5)<<list[p].next<<endl;
			pre=p;
			p=list[pre].next;
		}
	}
	return 0;
}