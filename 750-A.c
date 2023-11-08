#include<stdio.h>

int main(){
int n,k;
scanf("%d %d",&n,&k);
int i=1,flag=1;
while(i<=n){

    k+=(5*i);
    if(k>240){
       printf("%d\n",i-1);
       flag=0;
       break;
    }
    i++;
}
if(flag==1){
printf("%d\n",i-1);
}
return 0;
}
