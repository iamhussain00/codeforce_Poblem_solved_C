#include<stdio.h>

int main(){


int n,countAnton=0,countDanik=0;
scanf("%d",&n);
char s[n+10];

scanf("%s",s);

for(int i=0;i<n;i++){
    if(s[i]=='A'){
        countAnton++;
    }
    else{
    countDanik++;
}

}

if(countAnton>countDanik){
    puts("Anton");
}
else if(countDanik>countAnton){
    puts("Danik");
}
else{
    puts("Friendship");
}

return 0;
}
