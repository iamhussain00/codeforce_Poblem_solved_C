#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],str2[101];

    scanf("%s",str1);
    scanf("%s",str2);

    int size=strlen(str1);

    for(int i=0;i<size;i++){
        if(str1[i]>=65 && str1[i]<=90){
            str1[i]+=32;
        }
        if(str2[i]>=65 && str2[i]<=90){
            str2[i]+=32;
        }
    }
    int result=strcmp(str1,str2);

    if(result>0){
        puts("1");
    }
    else if(result<0){
        puts("-1");
    }
    else{
        puts("0");
    }

    return 0;
}
