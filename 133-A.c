#include<stdio.h>


int main()
{
    char s[102];

    scanf("%s",s);
    int flag=0,i=0;
    while(s[i]!='\0'){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
