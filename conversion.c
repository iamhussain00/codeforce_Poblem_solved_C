#include<stdio.h>
#include<string.h>

int main(){
char str[111111];

gets(str);
int i=0;
while (str[i]!='\0'){
    if (str[i]>='A' && str[i]<='Z'){
        str[i]=str[i]+32;
    }
    else if (str[i]>='a' && str[i]<='z'){
        str[i]=str[i]-32;
    }
    else if (str[i]==','){
        str[i]=' ';
    }
    i++;
}

puts(str);

return 0;}
