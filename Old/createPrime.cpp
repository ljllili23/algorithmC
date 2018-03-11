#include <stdio.h>
bool mark[100001];
int prime[100001];
int primeSize;
int main(){
	for(int i=0;i<=100000;++i){
		mark[i]=false;
	}
	for(int i=2;i<=100000;++i){
		if(mark[i]==true) continue;
		prime[primeSize++] = i;
		if(i>1000) continue;
		for(int j=i*i;j<=100000;j+=i){
			mark[j]=true;
		}
	}
	for(int i=0;i<50;++i){
		printf("%d\n",prime[i]);
		}
	return 0;
	}
	
