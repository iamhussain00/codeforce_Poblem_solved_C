#include<stdio.h>
#include<string.h>
int main(){
   int t;
   int x=0;
   scanf("%d",&t);
   for (int i=0;i<t;i++){
        char str[5];
    scanf("%s",str);
    if (str[1]=='+'){
        x++;
    }
    else {
        x--;
    }

   }
   printf("%d\n",x);
   return 0;
}
