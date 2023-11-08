#include<stdio.h>
#include<string.h>
int main(){


char s[102],t[102];
scanf("%s",s);
scanf("%s",t);

int n=strlen(t),n2=strlen(s),flag=1;

for(int i=0,j=n-1;i<n,j>=0;i++,j--){
    if(s[j]!=t[i]){
        flag=0;
        break;
    }
}
if(flag==0){
    puts("NO");
}
else{
    puts("YES");
}



return 0;
}

