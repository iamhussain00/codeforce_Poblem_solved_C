#include<stdio.h>
#include<string.h>
int main(){

char s[102];
scanf("%s",s);
int n=strlen(s);
char s1[]="hello";
int i=0,k=0,count=0;
while(i<5){
   for (int j=k;j<n;j++){
    if(s1[i]==s[j]){
        k=j+1;
        count++;
        break;
    }
   }
   i++;
}

if (count==5)
    puts("YES");
else
    puts("NO");
return 0;}
