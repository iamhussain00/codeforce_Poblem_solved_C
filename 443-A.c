#include<stdio.h>
#include<string.h>
int main(){
char s[1002],a[]="abcdefghijklmnopqrstuvwxyz";

fgets(s,1002,stdin);

int count=0;
int n=strlen(s);
for(int i=0;i<n;i++){

    if(s[i]>='a' && s[i]<='z'){
        int k=s[i]-'a';
        if(a[k]!='0'){
            count++;
            a[k]='0';
        }
    }
}

printf("%d",count);
return 0;}
