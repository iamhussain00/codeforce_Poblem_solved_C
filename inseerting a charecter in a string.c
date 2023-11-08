#include<stdio.h>
#include<string.h>

int main(){
char str[1000];
gets(str);
int size=strlen(str);
char x;
scanf("%c",&x);
int y;
scanf("%d",&y);

for (int i=size-1;i>=y;i--){
    str[i+1]=str[i];

    }
str[y]=x;

puts(str);
return 0;}
