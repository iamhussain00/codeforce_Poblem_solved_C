#include<stdio.h>
#include<string.h>
int main(){
char S[1100],T[1100];
gets(S);

gets(T);
int x=strlen(S),y=strlen(T);
printf("%d %d\n",x,y);

S[x]=' ';
strcat(S,T);



puts(S);
return 0;}
