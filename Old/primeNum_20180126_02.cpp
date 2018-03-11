//prime number problem
//2018-01-26
//@author: LeeJiangLee
#include <stdio.h>
#include <string>
int main(){
	int a,b;
	char str[40];			//why do we need 40 elements?
	while(scanf("%d%s%d",&a,str,&b)!=EOF){
		int tmp=0, lengh=strlen(str),c=1;
		for(int i=lengh-1;i>=0;--i){
			int x;
			if(str[i]>='0' && str[i]<='9'){
				x = str[i]-'0';
			}
			else if (str[i]>='a' && str[i]<='z'){
				x = str[i]-'a'+10;
			}
			else 
				x = str[i]-'A'+10;
			tmp+=x*c;
			c*=a;
		}
		char ans[40],size=0;
		do{
			int x = tmp%b;
			ans[size++] = (x<10) ? x+'0':x-10+'A';
			tmp/=b;
		}
	}
	return 0;
}