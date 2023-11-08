#include<stdio.h>

int main(){
int n,count=1;
scanf("%d",&n);
char s[3];
    scanf("%s",s);

    char c=s[1];
for(int i=0;i<n-1;i++){
    char s1[3];
    scanf("%s",s1);
    if(s1[1]!=c){
        c=s1[1];
        count++;
    }
}
printf("%d\n",count);
return 0;
}
