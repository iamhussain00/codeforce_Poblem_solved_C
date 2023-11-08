#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
int t;
scanf("%d",&t);

for(int i=0;i<t;i++){
        int x,k,count=0;

        scanf("%d %d",&x,&k);

        char str[x];
        scanf("%s",str);

        int i=0;
        while(i<x){
            if(str[i]=='B'){
                count++;
                i+=k;
            }
            else{
                i++;
            }
        }
    printf("%d\n",count);




}
return 0;
}
