//prime number problems
//2018-01-25
//@author:LeeJiangLee

#include <stdio.h>

int main(){
  char a[11],b[11];               //using strings to store two numbers less than 10^9
  while(scanf("%s%s",a,b)!=EOF){
    int ans=0;
    for(int i=0;a[i]!=0;++i){
      for(int j=0;b[j]!=0;++j){
        ans+=a[i]*b[j];
      }
    }
    printf("%d",ans);
  }
  return 0;
}
