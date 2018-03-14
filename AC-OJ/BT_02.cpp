#include <stdio.h>
#include <math.h>
int main(){
	int n,m;
	int ans;
	while(scanf("%d%d",&m,&n)==2){
		ans=0;
		//int lev1,lev2;
		//lev1=int(log(double(m+1))/log(2.0));
		//lev2=int(log(double(n+1))/log(2.0));
		int H = int(log(double(n/m))/log(2.0))+1;
		//int H=lev2-lev1+1;		//子树的高度
		//ans += int(pow((2.0),double(H)))-1;
		int tmp = int(pow((2.0),double(H-1)));
		if(n<m*tmp){
			ans=tmp-1;
		}else if(n>=m*tmp && n<=tmp*m+tmp-1){
			ans=n-m*tmp+tmp;
		}else{
			ans=int(pow((2.0),double(H)))-1;
		}
		printf("%d\n",ans);
	}
	return 0;
}