#include<stdio.h>
#include<string.h>

int main(){
char x[25],y[11];

gets(x);
gets(y);
int X=strlen(x),Y=strlen(y);
printf("%d %d\n",X,Y);

strcat(x,y);
puts(x);

int i;
for (i=strlen(x);i>=X;i--){
    x[i+1]=x[i];
}

x[X]=' ';
int temp=x[0];
    x[0]=x[X+1];
    x[X+1]=temp;

    puts(x);
return 0;}
