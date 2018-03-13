#include <iostream>
#include <string.h>
using namespace std;
struct Node{
	Node* lchild;
	Node* rchild;
	char c;
}Tree[110];
int loc;
char str[110];
int size;
Node* creat(){
	Tree[loc].lchild = Tree[loc].rchild = NULL;
	return &Tree[loc++];
}

void inOrder(Node* T){
	if (T->lchild != NULL){
		inOrder(T->lchild);
	}
	cout << T->c << ' ';
	if (T->rchild != NULL){
		inOrder(T->rchild);
	}
}

//+----------------------------------------------------
//NOTICE!
Node* build(){
	if (size >= strlen(str)) return NULL;
	if (str[size] == '#') { 	//NOTICE! '==' not '='!!
		++size;
		return NULL;
	}
	Node* T = creat();
	T->c = str[size++];
		T->lchild = build();
		T->rchild = build();
	return T;
}
//+-----------------------------------------------------

int main(){
	while (cin >> str){
		loc = 0;
		size = 0;
		Node* Root = NULL;
		Root = build();
		inOrder(Root);
	}
	return 0;
}