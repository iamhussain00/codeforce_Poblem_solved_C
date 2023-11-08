#include<stdio.h>

int main(){
char s[102];

scanf("%s",s);

int n=strlen(s),ct=0,cp=0, flag=0;

for(int i=0;i<n;i++){
    if(s[i]=='1'){
        ct++;
        if(ct>=7){
            flag=1;
            break;
        }
    }
    else{
        ct=0;
    }

    if(s[i]=='0'){
        cp++;
        if(cp>=7){
            flag=1;
            break;
        }
    }
    else{
        cp=0;
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

