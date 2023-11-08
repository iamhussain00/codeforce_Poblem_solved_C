#include<stdio.h>
int main(){

    char word[1010];

    scanf("%s",word);

    if(word[0]>=97 && word[0]<=122){
        word[0]=word[0]-32;
    }
    puts(word);
    return 0;
}
