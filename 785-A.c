#include<stdio.h>

int main(){

int n;
scanf("%d",&n);
int count=0,i=0;
while(n--){
    char s[25];
    scanf("%s",s);
    if(s[i]=='T'){
        count+=4;
    }
    else if(s[i]=='C'){
        count+=6;
    }
    else if(s[i]=='O'){
        count+=8;
    }
    else if(s[i]=='D'){
        count+=12;
    }
    else if(s[i]=='I'){
        count+=20;
    }
}
printf("%d\n",count);
return 0;
}
