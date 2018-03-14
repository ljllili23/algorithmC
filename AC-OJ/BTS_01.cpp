#include <iostream>
#include <sstream>
#include <string>
using namespace std;
string str1,str2;
struct Node{
	Node* lchild;
	Node* rchild;
	int c;
}Tree[62];
int loc;
int flag1,flag2;
Node* creat(){
	Tree[loc].lchild=Tree[loc].rchild;
	return &Tree[loc++];
}

void postOrder(Node* T){
	if(T->lchild!=NULL){
		postOrder(T->lchild);
	}
	if(T->rchild!=NULL){
		postOrder(T->rchild);
	}
	if(flag1==0) {
		cout<<T->c;
		flag1=1;
	}
	else cout<<' '<<T->c;
}

void inOrder(Node* T,string str){
	//string str;
	if(T->lchild!=NULL){
		inOrder(T->lchild,str);
	}
	str.push_back(T->c+'0');
	if(T->rchild!=NULL){
		inOrder(T->rchild,str);
	}
	//return str;
}

void LevelOrder(Node* T){
	Node* queue[32];
	int front,rear;
	front=rear=0;
	queue[rear++]=T;
	while(rear!=front){
		Node* t=queue[front++];
		if(flag2==0){
		cout<<t->c;
		flag2=1;
	}else 
		cout<<' '<<t->c;
		if(t->lchild!=NULL){
			queue[rear++]=t->lchild;
		}
		if(t->rchild!=NULL){
			queue[rear++]=t->rchild;
		}
	}
}

Node* Insert(Node* T,int x){
	if(T==NULL){
		T=creat();
		T->c=x;
		return T;
	}else if(x>T->c){
		T->rchild=Insert(T->rchild,x);
	}else if(x<T->c){
		T->lchild=Insert(T->lchild,x);
	}
	return T;
}
bool isSameTree(Node* p,Node* q){
	if(p==NULL&&q==NULL)
		return true;
	if((p==NULL&&q!=NULL) ||(q==NULL&&p!=NULL) ||(p->c!=q->c))
		return false;
	return isSameTree(p->lchild,q->lchild) && isSameTree(p->rchild,q->rchild);
}

int main(){
	int n;
	while(cin>>n){
		Node* T1=NULL;
		Node* T2=NULL;
		for(int i=0;i<n;++i){
			int t;
			cin>>t;
			T1=Insert(T1,t);
		}
		for(int i=0;i<n;++i){
			int t;
			cin>>t;
			T2=Insert(T2,t);
		}
		flag1=flag2=0;
		if(isSameTree(T1,T2)){
			//flag1=flag2=0;
			cout<<"YES"<<endl;
			postOrder(T1);
			cout<<endl;
			LevelOrder(T1);
			cout<<endl;

		}else{
		cout<<"NO"<<endl;
		postOrder(T1);
		cout<<endl;
		LevelOrder(T1);
		cout<<endl;
		}
	}
	return 0;
}