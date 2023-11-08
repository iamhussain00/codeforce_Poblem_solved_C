#include<stdio.h>
#include<string.h>

int main(){
char x[20],y[20];

gets(x);
gets(y);
int results=strcmp(x,y);

if (results>=0){
    puts(y);
}
else
    puts(x);

return 0;}
