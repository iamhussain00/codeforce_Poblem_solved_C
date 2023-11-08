#include<stdio.h>
#include<string.h>

int main(){
    char s[102];
    scanf("%s",s);
    int n=strlen(s),count=0;

    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            count++;
        }
    }
  if(2*count>n){
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
  }
  }
  else {
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
  }
    }
  }
  for(int i=0,j=n-1;j>i;i++,j--){
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
  }
  puts(s);
return 0;}
