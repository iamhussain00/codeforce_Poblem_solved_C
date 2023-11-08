#include<stdio.h>

int main(){
int n,m;

scanf("%d %d",&n,&m);

int max;

if(n>=m){
    max=m;
}
else{
   max=n;
}
if(max%2==0){
    printf("Malvika\n");
}
else{
    printf("Akshat\n");
}
}
