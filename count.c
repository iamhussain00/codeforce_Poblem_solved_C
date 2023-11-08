/*#include<stdio.h>
#include<string.h>

int main(){
char number[1000000];
int sum=0;
gets(number);

for (int i=0;number[i]!='\0';i++){
    sum+=number[i]-'0';
}
printf("%d\n",sum);
return 0;}*/
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char S[101];
        scanf("%s", S);

        int len = strlen(S);

        if (len <= 10) {
            // If the length of the string is 10 or less, print it as is.
            printf("%s\n", S);
        } else {
            // If the length is more than 10, print the abbreviation.
            printf("%c%d%c\n", S[0], len - 2, S[len - 1]);
        }
    }

    return 0;
}
