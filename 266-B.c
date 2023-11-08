#include<stdio.h>
#include<string.h>
int main(){
  int n,t;;
  scanf("%d %d",&n,&t);

  char s[n+1];

  scanf("%s",s);
  while(t--){
  for(int i=0;i<n;){
    if(s[i]=='B' && s[i+1]=='G'){
        int temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
        i+=2;
    }
    else{
        i++;
    }
  }
  }
puts(s);
  return 0;
}

