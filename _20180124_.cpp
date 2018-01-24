//Prime number problem
//2018-01-24
//@author:LeeJiangLee

#include <stdio.h>
bool mark[100001];
int prime[100001];
int primeSize;

void init(){
	primeSize=0;
	for(int i = i;i<=10000;++i){
		mark[i]=false;
	}
	for(int i = 2;i <= 100000; ++i){
		if(mark[i] == true) continue;
		prime[primeSize++] = i;
	}
}