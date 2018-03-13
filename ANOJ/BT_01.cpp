#include <iostream>
#include <queue>
using namespace std;

struct Node{
	Node* lchild;
	Node* rchild;
	int c;
}Tree[100001];
int loc;
Node* creat(){
	Tree[loc].lchild = Tree[loc].rchild = NULL;
	return &Tree[loc++];
}

Node* Insert(Node* p, int x){
	if (p == NULL){
		p = creat();
		p->c = x;
		return p;
	}
	else if (x>p->c){
		p->rchild=Insert(p->rchild,x);
		//Insert(p->rchild, x);
	}
	else if (x<p->c){
		p->lchild=Insert(p->lchild,x);
		//Insert(p->lchild, x);
	}
	return p;
}

void LevelOrder(Node* T){
	int flag = 0;
	Node* queue[100001];
	int front, rear;
	front = rear = 0;
	queue[rear++] = T;
	while (rear != front){
		Node* t = queue[front++];
		if (flag == 0){
			cout << t->c;
			flag = 1;
		}
		else{
			cout << ' ' << t->c;
		}
		if (t->lchild != NULL){
			queue[rear++] = t->lchild;
		}
		if (t->rchild != NULL){
			queue[rear++] = t->rchild;
		}
	}
	cout << endl;
}

int main(){
	int n;
	//loc=0;
	while (cin >> n){
		loc = 0;
		int t;
		Node* Root=NULL;
		while (n--){
			cin >> t;
			//Node* tmp;
			Root = Insert(Root, t);
		}
		LevelOrder(Root);
	}
	return 0;
}