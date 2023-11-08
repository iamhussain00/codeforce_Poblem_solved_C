#include<stdio.h>
#include<string.h>
int main(){
char S[110000];
fgets(S,sizeof(S),stdin);


for (int i=0;S[i]!='\\';i++)
{
    printf("%c",S[i]);
}


return 0;}

