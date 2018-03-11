//big integer base converter
//2018-02-05
//@author: LeeJiangLee

#include <stdio.h>
#include <string.h>
#define maxDigits 100;

struct bigInteger {
	int digit[maxDigits];
	int size;
	void init(){
		size = 0;
		for(int i=0;i<maxDigits;++i) digit[i]=0;
	}
	void set(int x){
		do{
			digit[size++] = x%10000;
			x /= 10000;
		}while(x!=0);
	}
	void output(){
		for(int i=size-1;i>=0;--i){
			if(i!=size-1) printf("%04d",digit[i]);
			else printf("%d",digit[i]);
		}
		printf("\n");
	}
	bigInteger operator * (int x) const {
		bigInteger ret;
		ret.init();
		int carry;
		for(int i=0;i<size;++i){
			int tmp = digit[i]*x + carry;
			carry = tmp/10000;
			tmp %= 10000;
		}
	}
}