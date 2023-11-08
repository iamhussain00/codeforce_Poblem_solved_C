#include<stdio.h>

int main(){
char s1[]="ali hussain";

char *s2=s1;//s2 is a shallow copy
s1[0]='m';
printf("%s\n",s2);

int size=0;
int i=0;
while (s1[i]!='\0'){

    size++;
    i++;
}

char s3[size];
for (int i=0;i<size;i++){
    s3[i]=s1[i];

}

puts(s3);
return 0;}
