#include<stdio.h>

int main(){
int k,n,w;

scanf("%d %d %d",&k,&n,&w);

int taka=(k*w*(w+1))/2;
if(taka>n){
    printf("%d\n",taka-n);
}
else{
    printf("0\n");
}

return 0;
}
